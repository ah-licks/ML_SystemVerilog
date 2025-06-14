import Common::*;

module MLP #(
    parameter int inputs = 2,
    parameter int hidden_layer_size = 4,
    parameter int outputs = 1
) (
    input logic clk,
    input logic rst,
    input real values[inputs-1:0],
    input real expected[outputs-1:0],
    input act_func hidden_activation,
    input act_func output_activation,
    input logic training,
    input real learning_rate,
    output real prediction[outputs-1:0]
);

    real hidden_predictions[hidden_layer_size-1:0];
    real next_layer_weights[hidden_layer_size-1:0][outputs-1:0];

    real output_error_gradients[outputs-1:0];
    real output_weights[outputs-1:0][hidden_layer_size-1:0];

    real activation_gradients[outputs-1:0];

    genvar h;
    generate
        for (h = 0; h < hidden_layer_size; h++) begin : gen_hidden_layer
            always_comb begin
                for (int i = 0; i < outputs; i++) begin
                    next_layer_weights[h][i] = output_weights[i][h];
                end
            end

            Perceptron #(
                .input_units (inputs),
                .output_units(outputs)
            ) hidden_perceptron (
                .clk(clk),
                .rst(rst),
                .values(values),
                .activation(hidden_activation),
                .training(training),
                .learning_rate(learning_rate),
                .next_layer_weights(next_layer_weights[h]),
                .error_gradient_next_layer(output_error_gradients),
                .prediction(hidden_predictions[h]),
                .error_gradient(),
                .current_weights()
            );
        end
    endgenerate

    genvar o;
    generate
        for (o = 0; o < outputs; o++) begin : gen_output_layer
            Perceptron #(
                .input_units (hidden_layer_size),
                .output_units(1)
            ) output_perceptron (
                .clk(clk),
                .rst(rst),
                .values(hidden_predictions),
                .activation(output_activation),
                .training(training),
                .learning_rate(learning_rate),
                .next_layer_weights('{1.0}),
                .error_gradient_next_layer('{activation_gradients[o]}),
                .prediction(prediction[o]),
                .error_gradient(output_error_gradients[o]),
                .current_weights(output_weights[o])
            );
        end
    endgenerate

    always_comb begin
        for (int i = 0; i < outputs; i++) begin
            activation_gradients[i] = -((expected[i] / (prediction[i] + epsilon)) - (1 - expected[i]) / (1 - prediction[i] + epsilon));
        end
    end

endmodule

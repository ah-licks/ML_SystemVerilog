import Common::*;
import FixedPoint::*;

module MLP #(
    parameter int inputs = 2,
    parameter int hidden_layer_size = 4,
    parameter int outputs = 1
) (
    input logic clk,
    input logic rst,
    input sfp values[inputs-1:0],
    input sfp expected[outputs-1:0],
    input act_func hidden_activation,
    input act_func output_activation,
    input logic training,
    input sfp learning_rate,
    output sfp prediction[outputs-1:0]
);

    sfp hidden_predictions[hidden_layer_size-1:0];
    //sfp hidden_error_gradients[hidden_layer_size-1:0];
    //sfp hidden_weights[hidden_layer_size-1:0][inputs-1:0];
    sfp next_layer_weights[hidden_layer_size-1:0][outputs-1:0];

    sfp output_error_gradients[outputs-1:0];
    sfp output_weights[outputs-1:0][hidden_layer_size-1:0];

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

    //second layer onward (hidden) not implemented

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
                .next_layer_weights('{ONE}),
                .error_gradient_next_layer('{output_error_gradients[o]}),
                .prediction(prediction[o]),
                .error_gradient(),
                .current_weights(output_weights[o])
            );
        end
    endgenerate

    always_comb begin
        for (int i = 0; i < outputs; i++) begin
            output_error_gradients[i] = -(sfp_sub(
                sfp_div(
                    expected[i], sfp_add(prediction[i], epsilon)
                ),
                sfp_div(
                    sfp_sub(ONE, expected[i]), sfp_sub(ONE, sfp_add(prediction[i], epsilon)))
            ));
        end
    end

endmodule

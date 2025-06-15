import Common::*;
import FixedPoint::*;

module MLP #(
    parameter int inputs = 2,
    parameter int hidden_layers = 1,
    parameter int hidden_layer_sizes[hidden_layers-1:0] = '{2},
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

    function automatic int maximum_layer_size();
        int maximum = inputs;
        for (int i = 0; i < hidden_layers; i++) begin
            if (hidden_layer_sizes[i] > maximum) begin
                maximum = hidden_layer_sizes[i];
            end
        end
        if (outputs > maximum) begin
            maximum = outputs;
        end
        return maximum;
    endfunction

    localparam int max_layer_size = maximum_layer_size();

    sfp layer_weights[hidden_layers:0][max_layer_size-1:0][max_layer_size-1:0];

    /* verilator lint_off UNOPTFLAT */
    sfp layer_outputs[hidden_layers:0][max_layer_size-1:0];
    sfp layer_error_gradients[hidden_layers:0][max_layer_size-1:0];
    /* verilator lint_off UNOPTFLAT */

    sfp next_layer_weights[hidden_layers-1:0][max_layer_size-1:0][max_layer_size-1:0];

    sfp cost_gradients[outputs-1:0];

    always_comb begin
        for (int i = 0; i < inputs; i++) begin
            layer_outputs[0][i] = values[i];
        end
    end

    genvar layer;
    genvar neuron;
    generate
        for (layer = 0; layer < hidden_layers; layer++) begin : gen_hidden_layer
            localparam int current_layer_size = hidden_layer_sizes[layer];
            localparam int current_input_size = (layer == 0) ? inputs : hidden_layer_sizes[layer-1];
            localparam int current_output_size = (layer == hidden_layers-1) ? outputs : hidden_layer_sizes[layer+1];

            always_comb begin
                for (int i = 0; i < current_layer_size; i++) begin
                    for (int j = 0; j < current_output_size; j++) begin
                        next_layer_weights[layer][i][j] = layer_weights[layer+1][j][i];
                    end
                end
            end

            for (neuron = 0; neuron < current_layer_size; neuron++) begin : gen_hidden_neuron
                Perceptron #(
                    .input_units (current_input_size),
                    .output_units(current_output_size)
                ) hidden_perceptron (
                    .clk(clk),
                    .rst(rst),
                    .values(layer_outputs[layer][current_input_size-1:0]),
                    .activation(hidden_activation),
                    .training(training),
                    .learning_rate(learning_rate),
                    .next_layer_weights(next_layer_weights[layer][neuron][current_output_size-1:0]),
                    .error_gradient_next_layer(layer_error_gradients[layer+1][current_output_size-1:0]),
                    .prediction(layer_outputs[layer+1][neuron]),
                    .error_gradient(layer_error_gradients[layer][neuron]),
                    .current_weights(layer_weights[layer][neuron][current_input_size-1:0])
                );
            end
        end
    endgenerate

    generate
        for (neuron = 0; neuron < outputs; neuron++) begin : gen_output_layer_neuron
            Perceptron #(
                .input_units (hidden_layer_sizes[hidden_layers-1]),
                .output_units(1)
            ) output_perceptron (
                .clk(clk),
                .rst(rst),
                .values(layer_outputs[hidden_layers][hidden_layer_sizes[hidden_layers-1]-1:0]),
                .activation(output_activation),
                .training(training),
                .learning_rate(learning_rate),
                .next_layer_weights('{ONE}),
                .error_gradient_next_layer('{cost_gradients[neuron]}),
                .prediction(prediction[neuron]),
                .error_gradient(layer_error_gradients[hidden_layers][neuron]),
                .current_weights(layer_weights[hidden_layers][neuron][hidden_layer_sizes[hidden_layers-1]-1:0])
            );
        end
    endgenerate

    always_comb begin
        for (int i = 0; i < outputs; i++) begin
            cost_gradients[i] = -(sfp_sub(
                sfp_div(
                    expected[i], sfp_add(prediction[i], epsilon)
                ),
                sfp_div(
                    sfp_sub(ONE, expected[i]), sfp_sub(ONE, sfp_add(prediction[i], epsilon)))
            ));
        end
    end

endmodule

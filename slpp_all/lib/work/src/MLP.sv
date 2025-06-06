import Common::*;

module MLP #(
    parameter int input_size = 2,
    parameter int hidden_layers = 2,
    parameter int hidden_size[hidden_layers-1:0] = '{2, 2},
    parameter int output_size = 1
) (
    input logic clk,
    input logic rst,
    input real inputs[input_size-1:0],
    input act_func activation,
    input logic training,
    input real learning_rate,
    input real target_outputs[output_size-1:0],
    output real outputs[output_size-1:0],
    output logic training_complete
);

    // Calculate total number of layers (hidden + output)
    localparam int total_layers = hidden_layers + 1;

    // Dynamic layer sizes array
    int layer_sizes[total_layers:0];

    // Initialize layer sizes
    initial begin
        layer_sizes[0] = input_size;
        for (int i = 0; i < hidden_layers; i++) begin
            layer_sizes[i+1] = hidden_size[i];
        end
        layer_sizes[total_layers] = output_size;
    end

    // Layer outputs - each layer's output becomes next layer's input
    real layer_outputs  [  total_layers:0][max_layer_size-1:0];

    // Layer weights for backpropagation
    real layer_weights  [total_layers-1:0][max_layer_size-1:0] [max_layer_size-1:0];

    // Error gradients for backpropagation
    real error_gradients[total_layers-1:0][max_layer_size-1:0];

    // Maximum layer size for array declarations
    localparam int max_layer_size = 32;  // Adjust as needed

    // Assign inputs to first layer
    always_comb begin
        for (int i = 0; i < input_size; i++) begin
            layer_outputs[0][i] = inputs[i];
        end
    end

    // Assign outputs from last layer
    always_comb begin
        for (int i = 0; i < output_size; i++) begin
            outputs[i] = layer_outputs[total_layers][i];
        end
    end

    // Generate layers
    genvar layer, neuron;
    generate
        for (layer = 0; layer < total_layers; layer++) begin : gen_layers
            for (neuron = 0; neuron < layer_sizes[layer+1]; neuron++) begin : gen_neurons

                // Determine activation function for this layer
                act_func current_activation;
                always_comb begin
                    if (layer == total_layers - 1) begin
                        current_activation = output_activation;
                    end else begin
                        current_activation = hidden_activation;
                    end
                end

                // Prepare next layer weights and gradients for backprop
                real next_weights[max_layer_size-1:0];
                real next_gradients[max_layer_size-1:0];
                int next_layer_size;

                always_comb begin
                    if (layer == total_layers - 1) begin
                        // Output layer - calculate error from targets
                        next_layer_size = 1;
                        next_weights[0] = 1.0;
                        case (output_activation)
                            Sigmoid, Tanh: begin
                                next_gradients[0] = layer_outputs[layer+1][neuron] - target_outputs[neuron];
                            end
                            ReLU: begin
                                next_gradients[0] = layer_outputs[layer+1][neuron] - target_outputs[neuron];
                            end
                            default: begin
                                next_gradients[0] = layer_outputs[layer+1][neuron] - target_outputs[neuron];
                            end
                        endcase
                    end else begin
                        // Hidden layer - get gradients from next layer
                        next_layer_size = layer_sizes[layer+2];
                        for (int j = 0; j < layer_sizes[layer+2]; j++) begin
                            next_weights[j]   = layer_weights[layer+1][j][neuron];
                            next_gradients[j] = error_gradients[layer+1][j];
                        end
                    end
                end

                // Instantiate perceptron
                PerceptronFull #(
                    .input_units (layer_sizes[layer]),
                    .output_units(next_layer_size)
                ) perceptron (
                    .clk(clk),
                    .rst(rst),
                    .values(layer_outputs[layer][layer_sizes[layer]-1:0]),
                    .activation(current_activation),
                    .training(training),
                    .learning_rate(learning_rate),
                    .next_layer_weights(next_weights[next_layer_size-1:0]),
                    .error_gradient_next_layer(next_gradients[next_layer_size-1:0]),
                    .prediction(layer_outputs[layer+1][neuron]),
                    .error_gradient(error_gradients[layer][neuron]),
                    .current_weights(layer_weights[layer][neuron][layer_sizes[layer]-1:0])
                );
            end
        end
    endgenerate

    // Training completion logic (simple example)
    real total_error;
    always_comb begin
        total_error = 0;
        for (int i = 0; i < output_size; i++) begin
            total_error += (outputs[i] - target_outputs[i]) ** 2;
        end
    end

    // Simple training completion threshold
    assign training_complete = (total_error < 0.001) && training;

endmodule

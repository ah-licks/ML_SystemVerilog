import Common::*;
//import FixedPoint::*;

module Perceptron #(
    parameter int input_units  = 2,
    parameter int output_units = 2
) (
    input logic clk,
    input logic rst,
    input real values[input_units-1:0],
    input act_func activation,
    input logic training,
    input real learning_rate,
    input real next_layer_weights[output_units-1:0],
    input real error_gradient_next_layer[output_units-1:0],
    output real prediction,
    output real error_gradient,
    output real current_weights[input_units-1:0]
);
    real weights[input_units-1:0];
    real bias;
    real sum;
    real weight_gradient[input_units-1:0];
    real bias_gradient;
    real local_error_gradient;

    assign error_gradient = local_error_gradient;

    always_comb begin
        for (int i = 0; i < input_units; i++) begin
            current_weights[i] = weights[i];
        end
    end

    always_comb begin
        sum = bias;
        for (int i = 0; i < input_units; i++) begin
            sum = sum + weights[i] * values[i];
        end
    end

    Predict predict (
        .activation(activation),
        .sum(sum),
        .prediction(prediction)
    );

    always_comb begin
        local_error_gradient = 0;
        case (activation)
            Sigmoid: begin
                for (int i = 0; i < output_units; i++) begin
                    local_error_gradient += next_layer_weights[i] * error_gradient_next_layer[i] * prediction * (1 - prediction);
                end
            end
            Tanh: begin
                for (int i = 0; i < output_units; i++) begin
                    local_error_gradient += next_layer_weights[i] * error_gradient_next_layer[i] * (1 - prediction ** 2);
                end
            end
            ReLU: begin
                for (int i = 0; i < output_units; i++) begin
                    local_error_gradient += next_layer_weights[i] * ((sum >= 0) ? error_gradient_next_layer[i] : 0);
                end
            end
            default: begin
                local_error_gradient = 0;
            end
        endcase

        for (int i = 0; i < input_units; i++) begin
            weight_gradient[i] = local_error_gradient * values[i];
        end

        bias_gradient = local_error_gradient;
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            for (int i = 0; i < input_units; i++) begin
                weights[i] <= $urandom_range(100, 1) / 100.0 - 0.5;
            end
            bias <= $urandom_range(100, 1) / 100.0 - 0.5;
        end else if (training) begin
            for (int i = 0; i < input_units; i++) begin
                weights[i] <= weights[i] - learning_rate * weight_gradient[i];
            end

            bias <= bias - learning_rate * bias_gradient;
        end
    end

endmodule

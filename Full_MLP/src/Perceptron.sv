import Common::*;
import FixedPoint::*;

module Perceptron #(
    parameter int input_units  = 2,
    parameter int output_units = 2
) (
    input logic clk,
    input logic rst,
    input sfp values[input_units-1:0],
    input act_func activation,
    input logic training,
    input sfp learning_rate,
    input sfp next_layer_weights[output_units-1:0],
    input sfp error_gradient_next_layer[output_units-1:0],
    output sfp prediction,
    output sfp error_gradient,
    output sfp current_weights[input_units-1:0]
);
    sfp weights[input_units-1:0];
    sfp bias;
    sfp sum;
    sfp weight_gradient[input_units-1:0];
    sfp bias_gradient;

    always_comb begin
        for (int i = 0; i < input_units; i++) begin
            current_weights[i] = weights[i];
        end
    end

    always_comb begin
        sum = bias;
        for (int i = 0; i < input_units; i++) begin
            sum = sfp_add(sum, sfp_mul(weights[i], values[i]));
        end
    end

    Predict predict (
        .activation(activation),
        .sum(sum),
        .prediction(prediction)
    );

    always_comb begin
        error_gradient = 0;
        case (activation)
            Sigmoid: begin
                for (int i = 0; i < output_units; i++) begin
                    error_gradient = sfp_add(
                        error_gradient,
                        sfp_mul(
                            next_layer_weights[i],
                            sfp_mul(
                                error_gradient_next_layer[i],
                                sfp_mul(
                                    prediction, sfp_sub(ONE, prediction))))
                    );
                end
            end
            Tanh: begin
                for (int i = 0; i < output_units; i++) begin
                    error_gradient = sfp_add(
                        error_gradient,
                        sfp_mul(
                            next_layer_weights[i],
                            sfp_mul(
                                error_gradient_next_layer[i],
                                sfp_sub(
                                    ONE, sfp_pow(sfp_tanh(prediction), 2))))
                    );
                end
            end
            ReLU: begin
                for (int i = 0; i < output_units; i++) begin
                    error_gradient = sfp_add(
                        error_gradient,
                        sfp_mul(
                            next_layer_weights[i], ((sum >= 0) ? error_gradient_next_layer[i] : 0))
                    );
                end
            end
            default: begin
                error_gradient = 0;
            end
        endcase

        for (int i = 0; i < input_units; i++) begin
            weight_gradient[i] = sfp_mul(error_gradient, values[i]);
        end

        bias_gradient = error_gradient;
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            for (int i = 0; i < input_units; i++) begin
                weights[i] <= sfp_random();
            end
            bias <= sfp_random();
        end else if (training) begin
            for (int i = 0; i < input_units; i++) begin
                weights[i] <= sfp_sub(weights[i], sfp_mul(learning_rate, weight_gradient[i]));
            end

            bias <= sfp_sub(bias, sfp_mul(learning_rate, bias_gradient));
        end
    end

endmodule

import FixedPoint::*;

module PerceptronIntroduction #(
    parameter int input_units = 2
) (
    input logic clk,
    input logic rst,
    input sfp values[input_units-1:0],
    input logic training,
    input sfp learning_rate,
    input sfp expected,
    output sfp prediction
);
    sfp weights[input_units-1:0];
    sfp bias;
    sfp sum;
    sfp error;

    always_comb begin
        sum = bias;
        for (int i = 0; i < input_units; i++) begin
            sum = sfp_add(sum, sfp_mul(weights[i], values[i]));
        end

        prediction = (sum > 0) ? ONE : 0;
        error = sfp_sub(expected, prediction);
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            for (int i = 0; i < input_units; i++) begin
                weights[i] <= 0;
            end
            bias <= 0;
        end else if (training) begin
            for (int i = 0; i < input_units; i++) begin
                weights[i] <=
                    sfp_add(weights[i], sfp_mul(learning_rate, sfp_mul(error, values[i])));
            end
            bias <= sfp_add(bias, sfp_mul(learning_rate, error));
        end
    end

endmodule

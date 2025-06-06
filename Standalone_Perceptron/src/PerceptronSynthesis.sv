import FixedPoint::*;

module PerceptronSynthesis (
    input  logic clk,
    input  logic first_input,
    input  logic second_input,
    output logic output_led
);

    parameter int input_units = 2;
    bit rst;
    sfp values[input_units-1:0];
    bit training = 1;
    sfp learning_rate;
    sfp prediction;
    sfp expected;
    sfp ONE;
    int epoch = 10;

    PerceptronIntroduction #(
        .input_units(input_units)
    ) perceptron_i (
        .clk(clk),
        .rst(rst),
        .values(values),
        .training(training),
        .learning_rate(learning_rate),
        .prediction(prediction),
        .expected(expected)
    );

    initial begin
        ONE = int_to_sfp(1);
        training = 1;
        learning_rate = ONE;
        rst = 1;
    end

    always_comb begin
        output_led = prediction > 0;
    end

    always_ff @(posedge clk) begin
        if (rst) begin
            output_led = 0;
            rst = 0;
        end else if (training && epoch < 8 * 10) begin
            case (epoch % 8)
                0: begin
                    values[0] = 0;
                    values[1] = 0;
                    expected  = 0;
                end
                2: begin
                    values[0] = 0;
                    values[1] = ONE;
                    expected  = 0;
                end
                4: begin
                    values[0] = ONE;
                    values[1] = 0;
                    expected  = 0;
                end
                6: begin
                    values[0] = ONE;
                    values[1] = ONE;
                    expected  = ONE;
                end
            endcase
            epoch++;
        end else begin
            values[0] = first_input;
            values[1] = second_input;
        end
    end

endmodule

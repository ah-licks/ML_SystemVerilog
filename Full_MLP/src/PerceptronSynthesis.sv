import Common::*;
import FixedPoint::*;

module PerceptronSynthesis (
    input  logic clk,
    input  logic first_input,
    input  logic second_input,
    output logic output_led
);

    parameter int input_units = 2;
    parameter int output_units = 1;
    bit clk;
    bit rst;
    sfp values[input_units-1:0];
    act_func activation;
    bit training;
    sfp learning_rate;
    sfp next_layer_weights[output_units-1:0];
    sfp error_gradient_next_layer[output_units-1:0];
    sfp prediction;
    sfp error_gradient;
    sfp current_weights[input_units-1:0];
    sfp expected;

    int epoch = 0;

    Perceptron #(
        .input_units (input_units),
        .output_units(output_units)
    ) perceptron (
        .clk(clk),
        .rst(rst),
        .values(values),
        .activation(activation),
        .training(training),
        .learning_rate(learning_rate),
        .next_layer_weights(next_layer_weights),
        .error_gradient_next_layer(error_gradient_next_layer),
        .prediction(prediction),
        .error_gradient(error_gradient),
        .current_weights(current_weights)
    );

    assign error_gradient_next_layer[0] = -(sfp_sub(
        sfp_div(
            expected, sfp_add(prediction, epsilon)
        ),
        sfp_div(
            sfp_sub(ONE, expected), sfp_sub(ONE, sfp_add(prediction, epsilon)))
    ));

    initial begin
        activation = Sigmoid;
        training = 1;
        learning_rate = ONE;
        next_layer_weights = '{ONE};
        rst = 1;
    end

    always_comb begin
        output_led = prediction > HALF;
    end

    initial begin
        if (rst) begin
            output_led = 0;
            rst = 0;
        end else if (training && epoch < 4 * 10) begin
            case (epoch % 4)
                0: begin
                    values[0] = 0;
                    values[1] = 0;
                    expected  = 0;
                end
                1: begin
                    values[0] = 0;
                    values[1] = ONE;
                    expected  = 0;
                end
                2: begin
                    values[0] = ONE;
                    values[1] = 0;
                    expected  = 0;
                end
                3: begin
                    values[0] = ONE;
                    values[1] = ONE;
                    expected  = ONE;
                end
            endcase
            epoch++;
        end else begin
            values[0] = int_to_sfp(32'(first_input));
            values[1] = int_to_sfp(32'(second_input));
        end
    end

endmodule

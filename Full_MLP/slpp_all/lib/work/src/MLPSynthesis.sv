import Common::*;
import FixedPoint::*;

module MLPSynthesis (
    input  logic clk,
    input  logic first_input,
    input  logic second_input,
    output logic output_led
);

    parameter int inputs = 2;
    parameter int hidden_layer_size = 2;
    parameter int outputs = 1;

    bit clk;
    bit rst;
    sfp values[inputs-1:0];
    sfp expected[outputs-1:0];
    act_func hidden_activation;
    act_func output_activation;
    bit training;
    sfp learning_rate;
    sfp prediction[outputs-1:0];

    sfp threshold;
    int correct;

    MLP #(
        .inputs(inputs),
        .hidden_layer_size(hidden_layer_size),
        .outputs(outputs)
    ) mlp (
        .clk(clk),
        .rst(rst),
        .values(values),
        .expected(expected),
        .hidden_activation(hidden_activation),
        .output_activation(output_activation),
        .training(training),
        .learning_rate(learning_rate),
        .prediction(prediction)
    );

    initial begin
        hidden_activation = ReLU;
        output_activation = Sigmoid;
        learning_rate = 'h1999999A;
        training = 1;
        rst = 1;
    end

    always_comb begin
        output_led = prediction > HALF;
    end

    always_ff @(posedge clk) begin
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

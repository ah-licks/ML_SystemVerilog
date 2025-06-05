import Common::*;
import FloatingPoint::*;

module PerceptronSynthesis (
    input  logic clk,
    input  logic first_input,
    input  logic second_input,
    output logic output_led,
    output logic training_led
);

    sfp ONE;
    parameter int size = 2;
    parameter int num = 4;
    sfp values[size-1:0];
    act_func activation;
    sfp prediction;
    bit training = 1;
    logic done_training;
    int epochs = 5;
    sfp learning_rate;
    sfp train_values[num-1:0][size-1:0];
    sfp expected[num-1:0];

    PerceptronIntroduction #(
        .size(size),
        .num (num)
    ) perceptron_i (
        .clk(clk),
        .values(values),
        .activation(activation),
        .prediction(prediction),
        .training(training),
        .epochs(epochs),
        .learning_rate(learning_rate),
        .train_values(train_values),
        .expected(expected),
        .done_training(done_training)
    );

    initial begin
        ONE = int_to_sfp(1);
        activation = Heaviside_Step;
        learning_rate = ONE;
        train_values = '{'{0, 0}, '{0, ONE}, '{ONE, 0}, '{ONE, ONE}};
        //AND
        expected = '{0, 0, 0, ONE};
        //OR
        //expected = '{0, ONE, ONE, ONE};
        //NAND
        //expected = '{ONE, ONE, ONE, 0};
        //XOR (should fail)
        //expected = '{0, ONE, ONE, 0};

        assign training_led = done_training;
        assign values[0] = int_to_sfp(32'(first_input));
        assign values[1] = int_to_sfp(32'(second_input));
        assign output_led = prediction > 0;
    end

endmodule

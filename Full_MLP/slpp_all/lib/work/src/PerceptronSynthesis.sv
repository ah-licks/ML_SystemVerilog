import Common::*;
import FixedPoint::*;

module PerceptronSynthesis (
    input  logic clk,
    input  logic first_input,
    input  logic second_input,
    output logic output_led,
    output logic training_led
);

    int ONE;
    parameter int input_units = 2;
    parameter int training_inputs = 4;
    int values[input_units-1:0];
    act_func activation;
    int prediction;
    bit training = 1;
    logic done_training;
    int epochs = 5;
    int learning_rate;
    int train_values[training_inputs-1:0][input_units-1:0];
    int expected[training_inputs-1:0];

    PerceptronIntroduction #(
        .input_units(input_units),
        .training_inputs(training_inputs)
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
        ONE = 1;
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
        assign values[0] = first_input;
        assign values[1] = second_input;
        //assign output_led = prediction > 0;
    end

endmodule

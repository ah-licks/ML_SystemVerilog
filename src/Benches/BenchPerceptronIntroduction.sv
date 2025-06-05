import Common::*;
import FloatingPoint::*;

module BenchPerceptronIntroduction ();

    sfp ONE;
    bit clk;
    parameter int size = 2;
    parameter int num = 4;
    sfp values[size-1:0];
    act_func activation;
    sfp prediction;
    bit training = 1;
    bit done_training;
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
        $dumpfile("sim.vcd");
        $dumpvars;

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

        clk = 0;
        forever begin
            #1 clk = ~clk;
        end
    end

    initial begin
        wait (done_training == 1);
        #10;
        values[0] = 0;
        values[1] = 0;
        #5 values[0] = ONE;
        values[1] = 0;
        #5 values[0] = 0;
        values[1] = ONE;
        #5 values[0] = ONE;
        values[1] = ONE;
        #5 $finish;
    end

endmodule

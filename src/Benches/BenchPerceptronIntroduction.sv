import Common::*;

module BenchPerceptronIntroduction ();

    bit clk;
    parameter int size = 2;
    parameter int num = 4;
    real values[size-1:0];
    act_func activation = Heaviside_Step;
    real prediction;
    bit training = 1;
    int epochs = 10;
    real learning_rate = 1;
    real train_values[num-1:0][size-1:0] = '{'{0.0, 0.0}, '{0.0, 1.0}, '{1.0, 0.0}, '{1.0, 1.0}};
    //AND
    real expected[num-1:0] = '{0.0, 0.0, 0.0, 1.0};
    //OR
    //real expected[num-1:0] = '{0.0, 1.0, 1.0, 1.0};
    //NAND
    //real expected[num-1:0] = '{1.0, 1.0, 1.0, 0.0};
    //XOR (should fail)
    //real expected[num-1:0] = '{0.0, 1.0, 1.0, 0.0};


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
        .expected(expected)
    );

    initial begin
        $dumpfile("sim.vcd");
        $dumpvars;
        clk = 0;
        forever begin
            #1 clk = ~clk;
        end
    end

    initial begin
        wait (training == 0);
        #10;
        values[0] = 0.0;
        values[1] = 0.0;
        #5 values[0] = 1.0;
        values[1] = 0.0;
        #5 values[0] = 0.0;
        values[1] = 1.0;
        #5 values[0] = 1.0;
        values[1] = 1.0;
        #5 $finish;
    end

endmodule

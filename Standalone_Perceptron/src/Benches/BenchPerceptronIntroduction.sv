import FixedPoint::*;

module BenchPerceptronIntroduction ();

    parameter int input_units = 2;
    bit clk;
    bit rst;
    sfp values[input_units-1:0];
    bit training = 1;
    sfp learning_rate;
    sfp prediction;
    sfp expected;

    int correct;

    sfp ONE;

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
        clk = 0;
        forever begin
            #5 clk = ~clk;
        end
    end

    initial begin
        $dumpfile("sim.vcd");
        $dumpvars;

        ONE = int_to_sfp(1);
        training = 1;
        learning_rate = ONE;

        rst = 1;
        repeat (3) @(posedge clk);
        rst = 0;

        $display("Starting AND gate training...");
        $display("Time\tInputs\tExpected\tPrediction");
        $display("----\t------\t--------\t----------");

        for (int epoch = 0; epoch < 10; epoch++) begin
            $display("\n=== Epoch %0d ===", epoch);

            training  = 1;

            values[0] = 0;
            values[1] = 0;
            expected  = 0;
            @(posedge clk);

            values[0] = 0;
            values[1] = ONE;
            expected  = 0;
            @(posedge clk);

            values[0] = ONE;
            values[1] = 0;
            expected  = 0;
            @(posedge clk);

            values[0] = ONE;
            values[1] = ONE;
            expected  = ONE;
            @(posedge clk);

            training  = 0;

            values[0] = 0;
            values[1] = 0;
            expected  = 0;
            @(posedge clk);
            $display("%0t\t[0,0]\t%d\t\t%d", $time, expected, prediction);

            values[0] = 0;
            values[1] = ONE;
            expected  = 0;
            @(posedge clk);
            $display("%0t\t[0,1]\t%d\t\t%d", $time, expected, prediction);

            values[0] = ONE;
            values[1] = 0;
            expected  = 0;
            @(posedge clk);
            $display("%0t\t[1,0]\t%d\t\t%d", $time, expected, prediction);

            values[0] = ONE;
            values[1] = ONE;
            expected  = ONE;
            @(posedge clk);
            $display("%0t\t[1,1]\t%d\t\t%d", $time, expected, prediction);
        end

        $display("\n=== Final Testing Phase ===");
        training  = 0;
        correct   = 0;

        values[0] = 0;
        values[1] = 0;
        expected  = 0;
        @(posedge clk);
        if (prediction == expected) correct++;
        $display("Test [0,0] -> %d(expected 0)", prediction);

        values[0] = 0;
        values[1] = ONE;
        expected  = 0;
        @(posedge clk);
        if (prediction == expected) correct++;
        $display("Test [0,1] -> %d (expected 0)", prediction);

        values[0] = ONE;
        values[1] = 0;
        expected  = 0;
        @(posedge clk);
        if (prediction == expected) correct++;
        $display("Test [1,0] -> %d (expected 0)", prediction);

        values[0] = ONE;
        values[1] = ONE;
        expected  = ONE;
        @(posedge clk);
        if (prediction == expected) correct++;
        $display("Test [1,1] -> %d (expected 1 << (2^32))", prediction);

        $display("\nClassification Accuracy: %0d/4 (%0.1f%%)", correct, (correct * 100.0) / 4.0);

        repeat (5) @(posedge clk);
        $finish;
    end

endmodule

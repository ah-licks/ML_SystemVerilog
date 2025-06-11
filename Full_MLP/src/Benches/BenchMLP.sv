import Common::*;
import FixedPoint::*;

module BenchMLP ();

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
        clk = 0;
        forever begin
            #5 clk = ~clk;
        end
    end

    initial begin
        $dumpfile("sim.vcd");
        $dumpvars;

        hidden_activation = ReLU;
        output_activation = Sigmoid;
        learning_rate = 'h1999999A;
        training = 1;

        rst = 1;
        repeat (3) @(posedge clk);
        rst = 0;

        $display("Starting XOR gate training...");
        $display("Time\tInputs\tExpected\tPrediction\tCost");
        $display("----\t------\t--------\t----------\t----");

        for (int epoch = 0; epoch < 100; epoch++) begin
            $display("\n=== Epoch %0d ===", epoch);

            training = 1;

            values[0] = 0;
            values[1] = 0;
            expected[0] = 0;
            @(posedge clk);

            values[0]   = 0;
            values[1]   = ONE;
            expected[0] = ONE;
            @(posedge clk);

            values[0]   = ONE;
            values[1]   = 0;
            expected[0] = ONE;
            @(posedge clk);

            values[0]   = ONE;
            values[1]   = ONE;
            expected[0] = 0;
            @(posedge clk);

            training = 0;

            values[0] = 0;
            values[1] = 0;
            expected[0] = 0;
            @(posedge clk);
            $display("%0t\t[0,0]\t%0.3f\t\t%d", $time, expected[0], prediction[0]);

            values[0]   = 0;
            values[1]   = ONE;
            expected[0] = ONE;
            @(posedge clk);
            $display("%0t\t[0,1]\t%0.3f\t\t%d", $time, expected[0], prediction[0]);

            values[0]   = ONE;
            values[1]   = 0;
            expected[0] = ONE;
            @(posedge clk);
            $display("%0t\t[1,0]\t%0.3f\t\t%d", $time, expected[0], prediction[0]);

            values[0]   = ONE;
            values[1]   = ONE;
            expected[0] = 0;
            @(posedge clk);
            $display("%0t\t[1,1]\t%0.3f\t\t%d", $time, expected[0], prediction[0]);
        end

        $display("\n=== Final Testing Phase ===");
        training = 0;
        threshold = HALF;
        correct = 0;

        values[0] = 0;
        values[1] = 0;
        expected[0] = 0;
        @(posedge clk);
        if ((prediction[0] < threshold) == (expected[0] < threshold)) correct++;
        $display("Test [0,0] -> %d (expected 0)", prediction[0]);

        values[0]   = 0;
        values[1]   = ONE;
        expected[0] = ONE;
        @(posedge clk);
        if ((prediction[0] < threshold) == (expected[0] < threshold)) correct++;
        $display("Test [0,1] -> %d (expected 2^32)", prediction[0]);

        values[0]   = ONE;
        values[1]   = 0;
        expected[0] = ONE;
        @(posedge clk);
        if ((prediction[0] < threshold) == (expected[0] < threshold)) correct++;
        $display("Test [1,0] -> %d (expected 2^32)", prediction[0]);

        values[0]   = ONE;
        values[1]   = ONE;
        expected[0] = 0;
        @(posedge clk);
        if ((prediction[0] < threshold) == (expected[0] < threshold)) correct++;
        $display("Test [1,1] -> %d (expected 0)", prediction[0]);

        $display("\nClassification Accuracy: %0d/4 (%0.1f%%)", correct, (correct * 100.0) / 4.0);

        repeat (5) @(posedge clk);
        $finish;
    end

endmodule

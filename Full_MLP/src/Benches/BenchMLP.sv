import Common::*;

module BenchMLP ();

    parameter int inputs = 2;
    parameter int hidden_layer_size = 4;
    parameter int outputs = 1;

    bit clk;
    bit rst;
    real values[inputs-1:0];
    real expected[outputs-1:0];
    act_func hidden_activation;
    act_func output_activation;
    bit training;
    real learning_rate;
    real prediction[outputs-1:0];

    real threshold;
    int correct;

    real cost;
    always_comb begin
        cost = -1 * (expected[0] * $ln(prediction[0] + epsilon) +
                     (1 - expected[0]) * $ln(1 - prediction[0] + epsilon));
    end

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

        $urandom(42);

        hidden_activation = ReLU;
        output_activation = Sigmoid;
        learning_rate = 0.1;
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

            @(posedge clk);
            values[0]   = 0.0;
            values[1]   = 0.0;
            expected[0] = 0.0;
            @(posedge clk);

            @(posedge clk);
            values[0]   = 0.0;
            values[1]   = 1.0;
            expected[0] = 1.0;
            @(posedge clk);

            @(posedge clk);
            values[0]   = 1.0;
            values[1]   = 0.0;
            expected[0] = 1.0;
            @(posedge clk);

            @(posedge clk);
            values[0]   = 1.0;
            values[1]   = 1.0;
            expected[0] = 0.0;
            @(posedge clk);

            training = 0;

            @(posedge clk);
            values[0]   = 0.0;
            values[1]   = 0.0;
            expected[0] = 0.0;
            @(posedge clk);
            $display("%0t\t[0,0]\t%0.3f\t\t%0.6f\t%0.6f", $time, expected[0], prediction[0], cost);

            @(posedge clk);
            values[0]   = 0.0;
            values[1]   = 1.0;
            expected[0] = 1.0;
            @(posedge clk);
            $display("%0t\t[0,1]\t%0.3f\t\t%0.6f\t%0.6f", $time, expected[0], prediction[0], cost);

            @(posedge clk);
            values[0]   = 1.0;
            values[1]   = 0.0;
            expected[0] = 1.0;
            @(posedge clk);
            $display("%0t\t[1,0]\t%0.3f\t\t%0.6f\t%0.6f", $time, expected[0], prediction[0], cost);

            @(posedge clk);
            values[0]   = 1.0;
            values[1]   = 1.0;
            expected[0] = 0.0;
            @(posedge clk);
            $display("%0t\t[1,1]\t%0.3f\t\t%0.6f\t%0.6f", $time, expected[0], prediction[0], cost);
        end

        $display("\n=== Final Testing Phase ===");
        training = 0;

        @(posedge clk);
        values[0]   = 0.0;
        values[1]   = 0.0;
        expected[0] = 0.0;
        @(posedge clk);
        $display("Test [0,0] -> %0.6f (expected 0.000)", prediction[0]);

        @(posedge clk);
        values[0]   = 0.0;
        values[1]   = 1.0;
        expected[0] = 1.0;
        @(posedge clk);
        $display("Test [0,1] -> %0.6f (expected 1.000)", prediction[0]);

        @(posedge clk);
        values[0]   = 1.0;
        values[1]   = 0.0;
        expected[0] = 1.0;
        @(posedge clk);
        $display("Test [1,0] -> %0.6f (expected 1.000)", prediction[0]);

        @(posedge clk);
        values[0]   = 1.0;
        values[1]   = 1.0;
        expected[0] = 0.0;
        @(posedge clk);
        $display("Test [1,1] -> %0.6f (expected 0.000)", prediction[0]);

        threshold = 0.5;
        correct   = 0;

        if ((prediction[0] < threshold) == (expected[0] < threshold)) correct++;

        @(posedge clk);
        values[0]   = 0.0;
        values[1]   = 1.0;
        expected[0] = 0.0;
        @(posedge clk);
        if ((prediction[0] < threshold) == (expected[0] < threshold)) correct++;

        @(posedge clk);
        values[0]   = 1.0;
        values[1]   = 0.0;
        expected[0] = 0.0;
        @(posedge clk);
        if ((prediction[0] < threshold) == (expected[0] < threshold)) correct++;

        @(posedge clk);
        values[0]   = 0.0;
        values[1]   = 0.0;
        expected[0] = 0.0;
        @(posedge clk);
        if ((prediction[0] < threshold) == (expected[0] < threshold)) correct++;

        $display("\nClassification Accuracy: %0d/4 (%0.1f%%)", correct, (correct * 100.0) / 4.0);

        repeat (5) @(posedge clk);
        $finish;
    end

endmodule

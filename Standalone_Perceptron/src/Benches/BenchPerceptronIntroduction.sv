import FixedPoint::*;

module BenchPerceptronIntroduction ();

    parameter int input_units = 2;
    parameter int num_train_examples = 4;
    parameter int num_test_examples = 4;
    bit clk;
    bit rst;
    sfp values[input_units-1:0];
    bit training = 1;
    sfp learning_rate;
    sfp prediction;
    sfp expected;

    int example;
    int correct;

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

    Data #(
        .inputs(input_units),
        .outputs(1),
        .total_examples(num_train_examples + num_test_examples)
    ) data (
        .example (example),
        .values  (values),
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

            training = 1;
            example  = 0;

            for (int i = 0; i < num_train_examples; i++) begin
                @(posedge clk);
                example++;
            end

            training = 0;
            example  = 0;

            for (int i = 0; i < num_train_examples; i++) begin
                @(posedge clk);
                $display("%0t\t[%d,%d]\t%d\t\t%d", $time, values[0], values[1], expected,
                         prediction);
                example++;
            end
        end

        $display("\n=== Final Testing Phase ===");
        training = 0;
        correct  = 0;

        example  = 0;

        for (int i = 0; i < num_test_examples; i++) begin
            @(posedge clk);
            if (prediction == expected) correct++;
            $display("Test [%d,%d] -> %d (expected %d)", values[0], values[1], prediction,
                     expected);
            example++;
        end

        $display("\nClassification Accuracy: %d/%d (%0.1f%%)", correct, num_test_examples,
                 (correct * 100.0) / num_test_examples);

        repeat (5) @(posedge clk);
        $finish;
    end

endmodule

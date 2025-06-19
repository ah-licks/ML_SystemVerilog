import Common::*;
import FixedPoint::*;

module BenchMLP ();

    parameter int inputs = 2;
    parameter int hidden_layers = 2;
    parameter int hidden_layer_sizes[hidden_layers-1:0] = '{2, 2};
    parameter int outputs = 1;
    parameter int num_train_examples = 70;
    parameter int num_test_examples = 30;

    bit clk;
    bit rst;
    sfp values[inputs-1:0];
    sfp expected[outputs-1:0];
    act_func hidden_activation;
    act_func output_activation;
    bit training;
    sfp learning_rate;
    sfp prediction[outputs-1:0];

    int example;
    sfp threshold;
    int correct;
    bit tmp_correct;

    MLP #(
        .inputs(inputs),
        .hidden_layers(hidden_layers),
        .hidden_layer_sizes(hidden_layer_sizes),
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

    Data #(
        .inputs(inputs),
        .outputs(outputs),
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

        hidden_activation = ReLU;
        output_activation = Sigmoid;
        learning_rate = 'h28f5c29;
        training = 1;

        rst = 1;
        repeat (3) @(posedge clk);
        rst = 0;

        $display("Starting XOR gate training...");
        $display("Time\tInputs\tExpected\tPrediction");
        $display("----\t------\t--------\t----------");

        for (int epoch = 0; epoch < 100; epoch++) begin
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
                $display("%0t\t[%d,%d]\t%d\t\t%d", $time, values[0], values[1], expected[0],
                         prediction[0]);
                example++;
            end
        end

        $display("\n=== Final Testing Phase ===");
        training  = 0;
        threshold = HALF;
        correct   = 0;

        example   = num_train_examples;

        for (int i = 0; i < num_test_examples; i++) begin
            @(posedge clk);
            tmp_correct = 1;
            for (int j = 0; j < 10; j++) begin
                if ((prediction[j] < threshold) != (expected[j] < threshold)) tmp_correct = 0;
            end
            if (tmp_correct) correct++;
            $display("Test [%d,%d] -> %d (expected %d)", values[0], values[1], prediction[0],
                     expected[0]);
            example++;
        end

        $display("\nClassification Accuracy: %d/%d (%0.1f%%)", correct, num_test_examples,
                 (correct * 100.0) / num_test_examples);

        repeat (5) @(posedge clk);
        $finish;
    end

endmodule

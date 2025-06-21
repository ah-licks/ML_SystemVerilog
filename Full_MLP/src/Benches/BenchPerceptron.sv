import Common::*;
import FixedPoint::*;

module BenchPerceptron ();

    parameter int input_units = 2;
    parameter int output_units = 1;
    parameter int num_train_examples = 600;
    parameter int num_test_examples = 400;

    bit clk;
    bit rst;
    sfp values[input_units-1:0];
    act_func activation;
    bit training;
    sfp learning_rate;
    sfp next_layer_weights[output_units-1:0];
    sfp error_gradient_next_layer[output_units-1:0];
    sfp prediction;
    sfp error_gradient;
    sfp current_weights[input_units-1:0];

    sfp expected[output_units-1:0];

    int example;
    sfp threshold;
    int correct;

    Perceptron #(
        .input_units (input_units),
        .output_units(output_units)
    ) perceptron (
        .clk(clk),
        .rst(rst),
        .values(values),
        .activation(activation),
        .training(training),
        .learning_rate(learning_rate),
        .next_layer_weights(next_layer_weights),
        .error_gradient_next_layer(error_gradient_next_layer),
        .prediction(prediction),
        .error_gradient(error_gradient),
        .current_weights(current_weights)
    );

    Data #(
        .inputs(input_units),
        .outputs(output_units),
        .total_examples(num_train_examples + num_test_examples)
    ) data (
        .example (example),
        .values  (values),
        .expected(expected)
    );

    always_comb begin
        for (int i = 0; i < output_units; i++) begin
            error_gradient_next_layer[i] = -(sfp_sub(
                sfp_div(
                    expected[0], sfp_add(prediction, epsilon)
                ),
                sfp_div(
                    sfp_sub(ONE, expected[0]), sfp_sub(ONE, sfp_add(prediction, epsilon)))
            ));
        end
    end

    initial begin
        clk = 0;
        forever begin
            #5 clk = ~clk;
        end
    end

    initial begin
        $dumpfile("sim.vcd");
        $dumpvars;

        activation = Sigmoid;
        training = 1;
        learning_rate = ONE;
        example = 0;

        next_layer_weights = '{ONE};

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

            // training = 0;
            // example  = 0;

            // for (int i = 0; i < num_train_examples; i++) begin
            //     @(posedge clk);
            //     $display("%0t\t[%d,%d]\t%d\t\t%d", $time, values[0], values[1], expected[0],
            //              prediction);
            //     example++;
            // end
        end

        $display("\n=== Final Testing Phase ===");
        training  = 0;
        threshold = HALF;
        correct   = 0;

        example   = num_train_examples;

        for (int i = 0; i < num_test_examples; i++) begin
            @(posedge clk);
            if ((prediction < threshold) == (expected[0] < threshold)) correct++;
            $display("Test [%d,%d] -> %d (expected %d)", values[0], values[1], prediction,
                     expected[0]);
            example++;
        end

        $display("\nClassification Accuracy: %d/%d (%0.1f%%)", correct, num_test_examples,
                 (correct * 100.0) / num_test_examples);

        repeat (5) @(posedge clk);
        $finish;
    end

endmodule

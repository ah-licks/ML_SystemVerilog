import Common::*;
import FixedPoint::*;

module BenchPerceptron ();

    parameter int input_units = 2;
    parameter int output_units = 1;
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

    sfp expected;

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

    assign error_gradient_next_layer[0] = -(sfp_sub(
        sfp_div(
            expected, sfp_add(prediction, epsilon)
        ),
        sfp_div(
            sfp_sub(ONE, expected), sfp_sub(ONE, sfp_add(prediction, epsilon)))
    ));

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

        next_layer_weights = '{ONE};

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
            $display("%0t\t[0,0]\t%d\t\t%0d", $time, expected, prediction);

            values[0] = 0;
            values[1] = ONE;
            expected  = 0;
            @(posedge clk);
            $display("%0t\t[0,0]\t%d\t\t%0d", $time, expected, prediction);

            values[0] = ONE;
            values[1] = 0;
            expected  = 0;
            @(posedge clk);
            $display("%0t\t[0,0]\t%d\t\t%0d", $time, expected, prediction);

            values[0] = ONE;
            values[1] = ONE;
            expected  = ONE;
            @(posedge clk);
            $display("%0t\t[0,0]\t%d\t\t%0d", $time, expected, prediction);
        end

        $display("\n=== Final Testing Phase ===");
        training  = 0;
        threshold = HALF;
        correct   = 0;

        values[0] = 0;
        values[1] = 0;
        expected  = 0;
        @(posedge clk);
        if ((prediction < threshold) == (expected < threshold)) correct++;
        $display("Test [0,0] -> %d (expected 0)", prediction);

        values[0] = 0;
        values[1] = ONE;
        expected  = 0;
        @(posedge clk);
        if ((prediction < threshold) == (expected < threshold)) correct++;
        $display("Test [0,1] -> %d (expected 0)", prediction);

        values[0] = ONE;
        values[1] = 0;
        expected  = 0;
        @(posedge clk);
        if ((prediction < threshold) == (expected < threshold)) correct++;
        $display("Test [1,0] -> %d (expected 0)", prediction);

        values[0] = ONE;
        values[1] = ONE;
        expected  = ONE;
        @(posedge clk);
        if ((prediction < threshold) == (expected < threshold)) correct++;
        $display("Test [1,1] -> %d (expected 2^32)", prediction);

        $display("\nClassification Accuracy: %0d/4 (%0.1f%%)", correct, (correct * 100.0) / 4.0);

        repeat (5) @(posedge clk);
        $finish;
    end

endmodule

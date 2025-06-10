import Common::*;
//import FixedPoint::*;

module BenchPerceptron ();

    parameter int input_units = 2;
    parameter int output_units = 1;
    bit clk;
    bit rst;
    real values[input_units-1:0];
    act_func activation;
    bit training;
    real learning_rate;
    real next_layer_weights[output_units-1:0];
    real error_gradient_next_layer[output_units-1:0];
    real prediction;
    real error_gradient;
    real current_weights[input_units-1:0];

    real expected;

    real threshold;
    int correct;

    real cost;
    always_comb begin
        cost = -1 *
            (expected * $ln(prediction + epsilon) + (1 - expected) * $ln(1 - prediction + epsilon));
    end

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

    assign error_gradient_next_layer[0] = -((expected / (prediction + epsilon)) - (1 - expected) / (1 - prediction + epsilon));

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
        learning_rate = 1;

        next_layer_weights = '{1};

        rst = 1;
        repeat (3) @(posedge clk);
        rst = 0;

        $display("Starting AND gate training...");
        $display("Time\tInputs\tExpected\tPrediction\tCost");
        $display("----\t------\t--------\t----------\t----");

        for (int epoch = 0; epoch < 10; epoch++) begin
            $display("\n=== Epoch %0d ===", epoch);

            training  = 1;

            values[0] = 0.0;
            values[1] = 0.0;
            expected  = 0.0;
            @(posedge clk);

            values[0] = 0.0;
            values[1] = 1.0;
            expected  = 0.0;
            @(posedge clk);

            values[0] = 1.0;
            values[1] = 0.0;
            expected  = 0.0;
            @(posedge clk);

            values[0] = 1.0;
            values[1] = 1.0;
            expected  = 1.0;
            @(posedge clk);

            training  = 0;

            values[0] = 0.0;
            values[1] = 0.0;
            expected  = 0.0;
            @(posedge clk);
            $display("%0t\t[0,0]\t%0.3f\t\t%0.6f\t%0.6f", $time, expected, prediction, cost);

            values[0] = 0.0;
            values[1] = 1.0;
            expected  = 0.0;
            @(posedge clk);
            $display("%0t\t[0,1]\t%0.3f\t\t%0.6f\t%0.6f", $time, expected, prediction, cost);

            values[0] = 1.0;
            values[1] = 0.0;
            expected  = 0.0;
            @(posedge clk);
            $display("%0t\t[1,0]\t%0.3f\t\t%0.6f\t%0.6f", $time, expected, prediction, cost);

            values[0] = 1.0;
            values[1] = 1.0;
            expected  = 1.0;
            @(posedge clk);
            $display("%0t\t[1,1]\t%0.3f\t\t%0.6f\t%0.6f", $time, expected, prediction, cost);
        end

        $display("\n=== Final Testing Phase ===");
        training  = 0;
        threshold = 0.5;
        correct   = 0;

        values[0] = 0.0;
        values[1] = 0.0;
        expected  = 0.0;
        @(posedge clk);
        if ((prediction < threshold) == (expected < threshold)) correct++;
        $display("Test [0,0] -> %0.6f (expected 0.000)", prediction);

        values[0] = 0.0;
        values[1] = 1.0;
        expected  = 0.0;
        @(posedge clk);
        if ((prediction < threshold) == (expected < threshold)) correct++;
        $display("Test [0,1] -> %0.6f (expected 0.000)", prediction);

        values[0] = 1.0;
        values[1] = 0.0;
        expected  = 0.0;
        @(posedge clk);
        if ((prediction < threshold) == (expected < threshold)) correct++;
        $display("Test [1,0] -> %0.6f (expected 0.000)", prediction);

        values[0] = 1.0;
        values[1] = 1.0;
        expected  = 1.0;
        @(posedge clk);
        if ((prediction < threshold) == (expected < threshold)) correct++;
        $display("Test [1,1] -> %0.6f (expected 1.000)", prediction);

        $display("\nClassification Accuracy: %0d/4 (%0.1f%%)", correct, (correct * 100.0) / 4.0);

        repeat (5) @(posedge clk);
        $finish;
    end

endmodule

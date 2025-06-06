import Common::*;

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
    real cost;
    real epsilon = 0.00000001;

    always_comb begin
        cost = -1 *
            (expected * $ln(prediction + epsilon) + (1 - expected) * $ln(1 - prediction + epsilon));
    end

    PerceptronFull #(
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
        $dumpfile("sim.vcd");
        $dumpvars;

        activation = Sigmoid;
        training = 1;
        learning_rate = 1;

        next_layer_weights = '{1};

        clk = 0;
        forever begin
            #1 clk = ~clk;
        end
    end

    initial begin
        rst = 1;
        #5;
        rst = 0;
        for (int i = 0; i < 5; i++) begin
            values[0] = 1;
            values[1] = 1;
            expected  = 1;
            @(posedge clk);
            values[0] = 1;
            values[1] = 0;
            expected  = 0;
            @(posedge clk);
            values[0] = 0;
            values[1] = 1;
            expected  = 0;
            @(posedge clk);
            values[0] = 0;
            values[1] = 0;
            expected  = 0;
            @(posedge clk);
        end
        training = 0;
        #5;
        $finish;
    end

endmodule

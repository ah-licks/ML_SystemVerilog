import AF::*;

module BenchPerceptron ();

    bit clk;
    int size = 2;
    logic weights[size:0];
    bit bias = 1;
    logic values[size:0];
    Act_Func activation = ReLU;
    bit prediction;

    Perceptron #(
        .size(size)
    ) perceptron_i (
        .clk(clk),
        .weights(weights),
        .bias(bias),
        .values(values),
        .activation(activation),
        .prediction(prediction)
    );

    // initial begin
    //     clk <= 0;
    //     forever begin
    //         #1 clk <= ~clk;
    //     end
    // end

    // initial begin
    //     #5;
    //     weights[0] = 1;
    //     #5;
    //     values[0] = 1;
    //     #5;
    //     weights[1] = 1;
    //     #5;
    //     values[1] = 1;
    //     $finish;
    // end

endmodule

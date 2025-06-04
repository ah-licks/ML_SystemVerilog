import AF::*;

module Perceptron #(
    parameter int size = 2,
    parameter int num  = 4
) (
    input logic clk,
    output real weights[size-1:0],
    output real bias,
    input real values[size-1:0],
    input Act_Func activation,
    output real prediction,
    output logic training,
    input int epochs,
    input real learning_rate,
    input real train_values[num-1:0][size-1:0],
    input real expected[num-1:0]
);

    real sum;

    always_comb begin
        sum = bias;
        for (int i = 0; i < size; i++) begin
            sum += weights[i] * values[i];
        end


        Activation activation_i (
            .activation(activation),
            .sum(sum),
            .prediction(prediction)
        );
    end

    always_ff @(posedge clk) begin
        if (training) begin
            for (int i = 0; i < epochs; i++) begin
                for (int j = 0; j < size; j++) begin
                    weights[j] <= weights[j] + learning_rate * (expected - prediction);
                end
                bias <= bias + learning_rate * (expected - prediction);
            end

            training = 0;
        end
    end

    //make enums for configuring perceptron
    //figure out backpropagation

endmodule

module Activation_Function (
    input logic clk,
    input Act_Func activation,
    input logic sum,
    output logic prediction
);

    always_ff @(posedge clk) begin
        case (activation):
            Identity: begin
                prediction <= sum;
            end
            Binary_Step: begin
                prediction <= (sum >= 0);
            end
            ReLU: begin
                prediction <= (sum > 0) ? sum : 0;
            end
        endcase
    end

    //make enums for activation functions
    //make enums for configuring perceptron
    //figure out backpropagation


endmodule

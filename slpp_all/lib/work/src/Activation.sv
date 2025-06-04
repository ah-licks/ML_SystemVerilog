import AF::*;

module Activation (
    input Act_Func activation,
    input real sum,
    output real prediction
);

    always_comb begin
        case (activation)
            Identity: begin
                prediction = sum;
            end
            Binary_Step: begin
                prediction = (sum >= 0);
            end
            ReLU: begin
                prediction = (sum > 0) ? sum : 0;
            end
        endcase
    end

endmodule

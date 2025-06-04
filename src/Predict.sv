import Common::*;

module Predict (
    input act_func activation,
    input real sum,
    output real prediction
);

    always_comb begin
        case (activation)
            Identity: begin
                prediction = sum;
            end
            Heaviside_Step: begin
                prediction = (sum > 0);
            end
            ReLU: begin
                prediction = (sum > 0) ? sum : 0;
            end
        endcase
    end

endmodule

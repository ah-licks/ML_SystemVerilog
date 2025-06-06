import Common::*;
import FixedPoint::*;

module Predict (
    input act_func activation,
    input int sum,
    output int prediction
);

    always_comb begin
        case (activation)
            Identity: begin
                prediction = sum;
            end
            Heaviside_Step: begin
                prediction = sum > 0;
            end
            ReLU: begin
                prediction = (sum > 0) ? sum : 0;
            end
            default: begin
                prediction = sum;
            end
        endcase
    end

endmodule

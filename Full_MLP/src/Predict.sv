import Common::*;
import FixedPoint::*;

module Predict (
    input act_func activation,
    input sfp sum,
    output sfp prediction
);

    always_comb begin
        case (activation)
            Step: begin
                prediction = (sum > 0) ? ONE : 0;
            end
            Sigmoid: begin
                prediction = sfp_sigmoid(sum);
            end
            Tanh: begin
                prediction = sfp_tanh(sum);
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

import Common::*;
import FloatingPoint::*;

module Predict (
    input act_func activation,
    input sfp sum,
    output sfp prediction
);

    always_comb begin
        case (activation)
            Identity: begin
                prediction = sum;
            end
            Heaviside_Step: begin
                prediction = int_to_sfp(32'(sum > 0));
            end
            ReLU: begin
                prediction = int_to_sfp(32'((sum > 0) ? sum : 0));
            end
            default: begin
                prediction = sum;
            end
        endcase
    end

endmodule

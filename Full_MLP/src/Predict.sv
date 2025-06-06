import Common::*;
//import FixedPoint::*;

module Predict (
    input act_func activation,
    input real sum,
    output real prediction
);

    always_comb begin
        case (activation)
            Step: begin
                prediction = sum > 0;
            end
            Sigmoid: begin
                prediction = 1 / (1 + e ** (-sum));
            end
            Tanh: begin
                prediction = 2 / (1 + e ** (-2 * sum)) - 1;
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

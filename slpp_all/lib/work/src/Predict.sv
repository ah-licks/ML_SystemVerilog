// Prediction Module
import Common::*;
import FixedPoint::*;

module Predict (
    input act_func activation,
    input sfp sum,
    output sfp prediction
);
    sfp sigmoid_out, tanh_out;

    SigmoidApprox sigmoid_approx (
        .x(sum),
        .y(sigmoid_out)
    );

    TanhApprox tanh_approx (
        .x(sum),
        .y(tanh_out)
    );

    always_comb begin
        case (activation)
            Sigmoid: prediction = sigmoid_out;
            Tanh: prediction = tanh_out;
            ReLU: prediction = (sum > 0) ? sum : 0;
            Step: prediction = (sum > 0) ? SFP_ONE : 0;
            default: prediction = 0;
        endcase
    end
endmodule

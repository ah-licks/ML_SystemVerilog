// Sigmoid Approximation Module
import FixedPoint::*;

module SigmoidApprox (
    input  sfp x,
    output sfp y
);
    // Piecewise linear approximation of sigmoid
    // For synthesis, we use a simple approximation
    always_comb begin
        if (x >= int_to_sfp(5)) begin
            y = SFP_ONE;
        end else if (x <= int_to_sfp(-5)) begin
            y = 0;
        end else begin
            // Linear approximation in the middle region
            // y     0.5 + 0.125 * x for x in [-4, 4]
            y = SFP_HALF + sfp_mul(x, real_to_sfp(0.125));
            if (y > SFP_ONE) y = SFP_ONE;
            if (y < 0) y = 0;
        end
    end
endmodule

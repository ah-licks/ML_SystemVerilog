// Tanh Approximation Module
module TanhApprox (
    input  sfp x,
    output sfp y
);
    always_comb begin
        if (x >= int_to_sfp(3)) begin
            y = SFP_ONE;
        end else if (x <= int_to_sfp(-3)) begin
            y = int_to_sfp(-1);
        end else begin
            // Linear approximation: y     0.5 * x for x in [-2, 2]
            y = sfp_mul(x, SFP_HALF);
            if (y > SFP_ONE) y = SFP_ONE;
            if (y < int_to_sfp(-1)) y = int_to_sfp(-1);
        end
    end
endmodule

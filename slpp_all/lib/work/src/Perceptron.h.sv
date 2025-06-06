// Fixed-Point Package
package FixedPoint;
    typedef logic signed [63:0] sfp;
    parameter int frac_bits = 32;

    function automatic sfp int_to_sfp(input int n);
        return (64'(signed'(n)) << frac_bits);
    endfunction

    function automatic int sfp_to_int(input sfp n);
        return 32'(n >>> frac_bits);
    endfunction

    function automatic sfp real_to_sfp(input real r);
        return sfp'(r * (2.0 ** frac_bits));
    endfunction

    function automatic real sfp_to_real(input sfp n);
        return real'(n) / (2.0 ** frac_bits);
    endfunction

    function automatic sfp sfp_add(input sfp a, b);
        return a + b;
    endfunction

    function automatic sfp sfp_sub(input sfp a, b);
        return a - b;
    endfunction

    function automatic sfp sfp_mul(input sfp a, b);
        logic signed [127:0] tmp;
        tmp = (a * b) >>> frac_bits;
        return tmp[63:0];
    endfunction

    function automatic sfp sfp_div(input sfp a, b);
        logic signed [127:0] tmp;
        tmp = (a << frac_bits) / b;
        return tmp[63:0];
    endfunction

    // Fixed-point constants
    parameter sfp SFP_ONE = 64'h100000000;  // 1.0
    parameter sfp SFP_HALF = 64'h80000000;  // 0.5
    parameter sfp SFP_EPSILON = 64'h1000;  // ~0.00000001
    parameter sfp SFP_NEG_HALF = 64'hffffffff80000000;  // -0.5
endpackage

package Common;
    typedef enum {
        Step,
        Sigmoid,
        Tanh,
        ReLU
    } act_func;
    typedef enum {
        Idle,
        Compute,
        Update
    } train_state;
endpackage

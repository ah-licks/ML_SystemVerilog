package FixedPoint;
    typedef logic signed [63:0] sfp;
    parameter int frac_bits = 32;

    function automatic sfp int_to_sfp(input int n);
        return (64'(signed'(n)) << frac_bits);
    endfunction

    function automatic int sfp_to_int(input sfp n);
        return 32'(n >>> frac_bits);
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

endpackage

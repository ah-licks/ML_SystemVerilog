package FixedPoint;
    typedef logic signed [63:0] sfp;
    parameter int frac_bits = 32;

    sfp epsilon = 64'h2a;
    sfp ONE = int_to_sfp(1);
    sfp HALF = 64'h80000000;

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

    function automatic sfp sfp_div(input sfp a, b);
        logic signed [127:0] remainder;
        logic signed [127:0] b_ext;
        logic signed [63:0] result;
        logic sign_bit;
        sfp abs_a, abs_b;

        if (b == 0) begin
            return (a >= 0) ? 64'h7FFFFFFFFFFFFFFF : 64'h8000000000000000;
        end
        if (a == 0) begin
            return 64'h0;
        end

        abs_a = a[63] ? -a : a;
        abs_b = b[63] ? -b : b;
        sign_bit = a[63] ^ b[63];

        remainder = {64'h0, abs_a} << frac_bits;
        b_ext = {64'h0, abs_b};
        result = 64'h0;

        for (int i = 63; i >= 0; i--) begin
            result = result << 1;
            if (remainder >= (b_ext << i)) begin
                remainder = remainder - (b_ext << i);
                result[0] = 'b1;
            end
        end

        return sign_bit ? -result : result;
    endfunction

    function automatic sfp sfp_exp(input sfp a);
        sfp result = ONE;
        sfp term = ONE;
        parameter int max_terms = 20;

        for (int i = 1; i < max_terms; i++) begin
            term   = sfp_div(sfp_mul(term, a), int_to_sfp(i));
            result = sfp_add(result, term);
        end

        return result;
    endfunction

    function automatic sfp sfp_sigmoid(input sfp a);
        if (a > int_to_sfp(6)) return ONE;
        if (a < int_to_sfp(-6)) return 0;
        return sfp_div(ONE, sfp_add(ONE, sfp_exp(-a)));
    endfunction

    function automatic sfp sfp_tanh(input sfp a);
        if (a > int_to_sfp(3)) return ONE;
        if (a < int_to_sfp(-3)) return -ONE;
        return sfp_sub(sfp_div(int_to_sfp(2), sfp_add(ONE, sfp_exp(-a << 1))), ONE);
    endfunction

    function logic [31:0] lcg_next();
        static logic [31:0] current = 32'h00000001;
        current = (current * 32'd1664525) + 32'd1013904223;
        return current;
    endfunction

    function automatic sfp sfp_uniform_random();
        return {32'h0, lcg_next()};
    endfunction

    function automatic sfp sfp_normal_random();
        sfp result = 0;
        for (int i = 0; i < 12; i++) begin
            result = sfp_add(result, sfp_uniform_random());
        end
        result = sfp_sub(result, int_to_sfp(6));
        return result;
    endfunction

    function automatic sfp sfp_ln(input sfp a);
        sfp result = 0;
        sfp power_term = ONE;
        parameter int max_terms = 10;

        for (int i = 1; i < max_terms; i++) begin
            power_term = sfp_mul(power_term, sfp_sub(1, a));
            result = sfp_add(result, sfp_div(power_term, int_to_sfp(i)));
        end

        return -result;
    endfunction

    function automatic sfp sfp_sqrt(input sfp a);
        return sfp_exp(sfp_ln(a) >>> 1);
    endfunction

    function automatic sfp sfp_he_initial(input int a);
        return sfp_mul(sfp_normal_random(), sfp_sqrt(sfp_div(int_to_sfp(2), int_to_sfp(a))));
    endfunction

endpackage

package Common;
    typedef enum {
        Step,
        Sigmoid,
        Tanh,
        ReLU
    } act_func;
endpackage

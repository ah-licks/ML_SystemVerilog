
import FixedPoint::*;

module Data #(
    parameter int inputs = 2,
    parameter int outputs = 1,
    parameter int total_examples = 4
) (
    input  int example,
    output sfp values  [inputs-1:0],
    output sfp expected
);

    sfp input_data[total_examples-1:0][inputs-1:0];
    sfp output_data[total_examples-1:0];

    sfp flat_input_data[(total_examples*inputs)-1:0];

    initial begin
        $readmemh("input_info.hex", flat_input_data);
        $readmemh("output_info.hex", output_data);

        for (int i = 0; i < total_examples; i++) begin
            for (int j = 0; j < inputs; j++) begin
                input_data[i][j] = flat_input_data[i*inputs+j];
            end
        end
    end

    always_comb begin
        values   = input_data[example];
        expected = output_data[example];
    end

endmodule

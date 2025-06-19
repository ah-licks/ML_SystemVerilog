
import FixedPoint::*;

module Data #(
    parameter int inputs = 2,
    parameter int outputs = 1,
    parameter int total_examples = 4
) (
    input  int example,
    output sfp values  [ inputs-1:0],
    output sfp expected[outputs-1:0]
);

    sfp input_data[total_examples-1:0][inputs-1:0];
    sfp output_data[total_examples-1:0][outputs-1:0];

    sfp flat_input_data[(total_examples*inputs)-1:0];
    sfp flat_output_data[(total_examples*outputs)-1:0];

    initial begin
        $readmemh("input_info.hex", flat_input_data);
        $readmemh("output_info.hex", flat_output_data);

        for (int i = 0; i < total_examples; i++) begin
            for (int j = 0; j < inputs; j++) begin
                input_data[i][j] = flat_input_data[i*inputs+j];
            end
        end

        for (int i = 0; i < total_examples; i++) begin
            for (int j = 0; j < outputs; j++) begin
                output_data[i][j] = flat_output_data[i*outputs+j];
            end
        end
    end

    always_comb begin
        values   = input_data[example];
        expected = output_data[example];
    end

endmodule

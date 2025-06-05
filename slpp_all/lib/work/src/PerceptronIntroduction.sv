import Common::*;
import FloatingPoint::*;

module PerceptronIntroduction #(
    parameter int size = 2,
    parameter int num  = 4
) (
    input logic clk,
    input sfp values[size-1:0],
    input act_func activation,
    output sfp prediction,
    input logic training,
    input int epochs,
    input sfp learning_rate,
    input sfp train_values[num-1:0][size-1:0],
    input sfp expected[num-1:0],
    output logic done_training
);
    sfp weights[size-1:0];
    sfp bias;
    sfp sum;
    train_state state;
    sfp train_prediction;
    sfp train_sum;
    int epoch_count = 0;
    int sample_idx = 0;
    sfp error;
    logic training_active;

    initial begin
        for (int i = 0; i < size; i++) begin
            weights[i] = 0;
        end
        bias  = 0;
        state = Idle;
    end

    always_comb begin
        sum = bias;
        for (int i = 0; i < size; i++) begin
            sum = sfp_add(sum, sfp_mul(weights[i], values[i]));
        end
    end

    Predict predict (
        .activation(activation),
        .sum(sum),
        .prediction(prediction)
    );

    always_comb begin
        train_sum = bias;
        for (int i = 0; i < size; i++) begin
            train_sum = sfp_add(train_sum, sfp_mul(weights[i], train_values[sample_idx][i]));
        end
    end

    Predict train_predict (
        .activation(activation),
        .sum(train_sum),
        .prediction(train_prediction)
    );

    always_ff @(posedge clk) begin
        if (!training_active && training) begin
            training_active <= 1;
            done_training   <= 0;
        end else begin
            case (state)
                Idle: begin
                    sample_idx <= 0;
                    state <= Compute;
                end

                Compute: begin
                    error <= sfp_sub(expected[sample_idx], train_prediction);
                    state <= Update;
                end

                Update: begin
                    for (int i = 0; i < size; i++) begin
                        weights[i] <= sfp_add(
                            weights[i],
                            sfp_mul(
                                learning_rate, sfp_mul(error, train_values[sample_idx][i]))
                        );
                    end
                    bias <= sfp_add(bias, sfp_mul(learning_rate, error));

                    if (sample_idx < num - 1) begin
                        sample_idx <= sample_idx + 1;
                        state <= Compute;
                    end else begin
                        sample_idx <= 0;
                        if (epoch_count < epochs - 1) begin
                            epoch_count <= epoch_count + 1;
                            state <= Compute;
                        end else begin
                            training_active <= 0;
                            done_training <= 1;
                            state <= Idle;
                        end
                    end
                end
            endcase
        end
    end

endmodule

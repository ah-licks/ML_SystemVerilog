import Common::*;
import FixedPoint::*;

module PerceptronIntroduction #(
    parameter int input_units = 2,
    parameter int training_inputs = 4
) (
    input logic clk,
    input int values[input_units-1:0],
    input act_func activation,
    output int prediction,
    input logic training,
    input int epochs,
    input int learning_rate,
    input int train_values[training_inputs-1:0][input_units-1:0],
    input int expected[training_inputs-1:0],
    output logic done_training
);
    int weights[input_units-1:0];
    int bias;
    int sum;
    train_state state;
    int train_prediction;
    int train_sum;
    int epoch_count = 0;
    int sample_idx = 0;
    int error;
    logic training_active;

    initial begin
        for (int i = 0; i < input_units; i++) begin
            weights[i] = 0;
        end
        bias  = 0;
        state = Idle;
    end

    //predicting

    always_comb begin
        sum = bias;
        for (int i = 0; i < input_units; i++) begin
            sum = sum + weights[i] * values[i];
        end
    end

    Predict predict (
        .activation(activation),
        .sum(sum),
        .prediction(prediction)
    );

    //training

    always_comb begin
        train_sum = bias;
        for (int i = 0; i < input_units; i++) begin
            train_sum = train_sum + weights[i] * train_values[sample_idx][i];
        end
    end

    Predict train_predict (
        .activation(activation),
        .sum(train_sum),
        .prediction(train_prediction)
    );

    always_ff @(posedge clk) begin
        if (done_training) begin

        end else if (!training_active && training) begin
            training_active <= 1;
            done_training   <= 0;
        end else begin
            case (state)
                Idle: begin
                    sample_idx <= 0;
                    state <= Compute;
                end
                Compute: begin
                    error <= expected[sample_idx] - train_prediction;
                    state <= Update;
                end
                Update: begin
                    for (int i = 0; i < input_units; i++) begin
                        weights[i] <= weights[i] + learning_rate * error * train_values[sample_idx][i];
                    end
                    bias <= bias + learning_rate * error;

                    if (sample_idx < training_inputs - 1) begin
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

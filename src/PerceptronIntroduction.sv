import Common::*;

module PerceptronIntroduction #(
    parameter int size = 2,
    parameter int num  = 4
) (
    input logic clk,
    input real values[size-1:0],
    input act_func activation,
    output real prediction,
    output logic training,
    input int epochs,
    input real learning_rate,
    input real train_values[num-1:0][size-1:0],
    input real expected[num-1:0]
);
    real weights[size-1:0];
    real bias;

    initial begin
        for (int i = 0; i < size; i++) begin
            weights[i] = 0;
        end
        bias = 0;
    end

    real sum;

    always_comb begin
        sum = bias;
        for (int i = 0; i < size; i++) begin
            sum += weights[i] * values[i];
        end
    end

    Predict predict (
        .activation(activation),
        .sum(sum),
        .prediction(prediction)
    );


    train_state state = Idle;
    real train_prediction;
    real train_sum;
    int epoch_count = 0;
    int sample_idx = 0;
    real error;

    always_comb begin
        train_sum = bias;
        for (int i = 0; i < size; i++) begin
            train_sum += weights[i] * train_values[sample_idx][i];
        end
    end

    Predict train_predict (
        .activation(activation),
        .sum(train_sum),
        .prediction(train_prediction)
    );

    always_ff @(posedge clk) begin
        if (training) begin
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
                    for (int i = 0; i < size; i++) begin
                        weights[i] <= weights[i] + learning_rate * error * train_values[sample_idx][i];
                    end
                    bias <= bias + learning_rate * error;

                    if (sample_idx < num - 1) begin
                        sample_idx <= sample_idx + 1;
                        state <= Compute;
                    end else begin
                        sample_idx <= 0;
                        if (epoch_count < epochs - 1) begin
                            epoch_count <= epoch_count + 1;
                            state <= Compute;
                        end else begin
                            training <= 0;
                            state <= Idle;
                        end
                    end
                end
            endcase
        end
    end

    //figure out backpropagation

endmodule

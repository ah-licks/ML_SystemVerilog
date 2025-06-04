package Common;
    typedef enum {
        Identity,
        Heaviside_Step,
        ReLU
    } act_func;
    typedef enum {
        Idle,
        Compute,
        Update
    } train_state;
endpackage

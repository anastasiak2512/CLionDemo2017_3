//
// Use Alt+Enter to invert if clause
//

static const int FAIL_VAL_MIN = 100;
static const int SCORE_MIN = 200;
static const int SCORE_MAX = 300;

void invert_if_sample(int a, int b) {
    int num = 0;

    if (a != FAIL_VAL_MIN) {
        num = a * b;
    } else {
        if (b == SCORE_MIN) {
            num = 0;
        } else {
            if (b == SCORE_MAX) {
                num = -1;
            } else {
                num = -2;
            }
        }
    };
    
    //...
}
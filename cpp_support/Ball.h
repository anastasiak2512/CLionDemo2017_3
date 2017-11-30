enum class Color {
    White, Black, Red, Green, Blue, Yellow
};

/*
 * Ball has a color and a position where it's located.
 */
class Ball {
private:
    Color cl;
    int position;

public:
    int kick_ball() {
        return position;
    }
};
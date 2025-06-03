#include "../../../PPP.h"

int area(int length, int width) {
    if (length <= 0 || width <= 0) {
        error("non-positive area() argument");
    }
    return length * width;
}

int framed_area(int x, int y) {
    constexpr int frame_width = 2;
    if (x - frame_width <= 0 || y - frame_width <= 0) {
        error("non-positive area() argument called by framed_area()");
    }
    return area(x - frame_width, y - frame_width);
}

int main() {
    cout << framed_area(2, 2) << '\n';
}

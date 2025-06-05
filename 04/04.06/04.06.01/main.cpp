#include "../../../PPP.h"

class Bad_area{}; // a type specifically for reporting errors from area()

int area(int length, int width) {
    // calculate area of a rectangle
    // throw a Bad_area exception in case of a bad argument
    if (length <= 0 || width <= 0)
        throw Bad_area{};
    return length * width;
}

int framed_area(int x, int y) {
    constexpr int frame_width = 2;
    if (x - frame_width <= 0 || y - frame_width <= 0) {
        error("non-positive area() argument called by framed_area()");
    }
    return area(x - frame_width, y - frame_width);
}

void test(int x, int y, int z) {
    int area1 = area(x, y);
    int area2 = framed_area(1, z);
    int area3 = framed_area(y, z);
    double ratio = area1 / area3;
    cout << area2 << '\n';
    cout << ratio << '\n';
}

int main() {
    try {
        test(-1, 2, 4);
    } catch(Bad_area) {
        cout << "Oops! bad arguments to area()\n";
    }
}

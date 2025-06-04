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

int f(int x, int y, int z) {
    int area1 = area(x, y);
    if (area1 <= 0)
        error("non-positive area");
    int area2 = framed_area(1, z);
    int area3 = framed_area(y, z);
    double ratio = double(area1) / area3;
    cout << "area1 = " << area1 << '\n';
    cout << "area2 = " << area2 << '\n';
    cout << "area3 = " << area3 << '\n';
    cout << "ratio = " << ratio << '\n';
    return 0;
}

int main() {
    f(0, 0, 0);
}

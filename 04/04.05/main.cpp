#include "../../PPP.h"

int area(int length, int width) {
    return length * width;
}

int framed_area(int x, int y) {
    return area(x - 2, y - 2);
}

void test(int x, int y, int z) {
    int area1 = area(x, y);
    int area2 = framed_area(1, z);
    int area3 = framed_area(y, z);
    double ratio = double(area1) / area3;
    cout << area2 << '\n';
    cout << ratio << '\n';
}

int main() {
    test(-1, 2, 3);
}

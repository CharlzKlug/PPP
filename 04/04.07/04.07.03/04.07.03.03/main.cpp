#include "../../../../PPP.h"
int area(int length, int width) {
    expect(0< length && 0 < width, "bad arguments to area()");
    int a = length * width;
    expect(0 < a, "bad area() result");
    return a;
}
int main() {
    cout << area(999999, 999999) << '\n';
}

#include "../../../PPP.h"

int area(int, int);

int main() {
    int x0 = area(7,2);
    int x1 = area(7,2);
    int x2 = area(7, 2);
    cout << x0 << ' ' << x1 << ' ' << x2 << '\n';

    int x4 = area(10, -7);
    int x5 = area((int)10.7, (int)9.3);
    char x6 = area(100, 9999);
    cout << x4 << ' ' << x5 << ' ' << x6 << '\n';
}

int area(int length, int width) {
    return length * width;
}

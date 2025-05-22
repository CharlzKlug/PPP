#include "../../../PPP.h"

int area(int, int);

int main() {
    int s1 = area(7,2);
    cout << s1 << '\n';

    int s2 = area(7,2);
    cout << s2 << '\n';

    int s3 = area(7,2);
    cout << s3 << '\n';

    int s4 = area(7, 2);
    cout << s4 << '\n';
}

int area(int length, int width) {
    return length * width;
}

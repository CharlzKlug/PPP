#include "../../../../PPP.h"

int my_complicated_function(int a, int b, int c) {
    expect([&]{return 0<a && a<b && b<c;}(), "bad arguments for mcf");
    return a + b + c;
}

int main() {
    cout << my_complicated_function(2, 3, 4) << '\n';
}

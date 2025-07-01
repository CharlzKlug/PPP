#include "../../../PPP.h"

class Token {
public:
    char kind;
    double value;
    Token(char k) : kind{k}, value{0.0} {}
    Token(char k, double v) : kind{k}, value{v} {}
};

int main() {
    Token t{'+'};
    t.kind = '+';
    Token t2{'8', 3.14};
    t2.kind = '8';
    t2.value = 3.14;

    Token tt = t;
    if (tt.kind != t.kind)
        error("impossible");
    t = t2;
    cout << t.value;
}

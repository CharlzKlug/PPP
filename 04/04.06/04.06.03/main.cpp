#include "../../../PPP.h"

void error(string s1, string s2) {
    throw runtime_error{s1 + s2};
}

int main() {
    double d = 0;
    cin >> d;
    if (cin) {
        cout << "My number: " << d << '\n';
    } else {
        cout << "I can't read number!\n";
    }
    error("dkjfkdjf", "123");
}

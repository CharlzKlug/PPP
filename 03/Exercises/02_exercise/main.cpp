#include "../../../PPP.h"

int main() {
    cout << "Enter some string: ";
    string tmpString;
    getline(cin, tmpString);
    for (char ch : tmpString) {
	cout << ch << ' ' << (int)ch << '\n';
    }
    return 0;
}

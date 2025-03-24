#include "../../../PPP.h"
int main() {
    string tmp;
    while (true) {
      enter_a:
	cout << "Enter number A: ";
	cin >> tmp;
	if (tmp == "|") break;
	int a;
	try {
	    a= stoi(tmp);
	} catch (std::invalid_argument) {
	    cout << "Wrong input!\n";
	    goto enter_a;
	}

      enter_b:
	cout << "Enter number B: ";
	cin >> tmp;
	if (tmp == "|") break;
	int b;
	try {
	    b= stoi(tmp);
	} catch (std::invalid_argument) {
	    cout << "Wrong input!\n";
	    goto enter_b;
	}

	cout << "You have entered A: "<< a << ", B: " << b << '\n';
    }
    cout << "Exit\n";
}

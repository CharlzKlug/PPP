#include "../../../PPP.h"

void printValues(int, int);

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

	// cout << "You have entered A: "<< a << ", B: " << b << '\n';
	printValues(a, b);
    }
    cout << "Exit\n";
}

void printValues(int inputA, int inputB) {
    if (inputA < inputB) {
	cout << "The smaller value is: " << inputA <<
	    ", the larger value is: " << inputB << '\n';
    }
    if	(inputB < inputA) {
	cout << "The smaller value is: " << inputB <<
	    ", the larger value is: " << inputA << '\n';
    }
}

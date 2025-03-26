#include "../../../PPP.h"

void printValues(double, double);

int main() {
    string tmp;
    while (true) {
      enter_a:
	cout << "Enter number A: ";
	cin >> tmp;
	if (tmp == "|") break;
	double a;
	try {
	    a= stod(tmp);
	} catch (std::invalid_argument) {
	    cout << "Wrong input!\n";
	    goto enter_a;
	}

      enter_b:
	cout << "Enter number B: ";
	cin >> tmp;
	if (tmp == "|") break;
	double b;
	try {
	    b= stod(tmp);
	} catch (std::invalid_argument) {
	    cout << "Wrong input!\n";
	    goto enter_b;
	}

	// cout << "You have entered A: "<< a << ", B: " << b << '\n';
	printValues(a, b);
    }
    cout << "Exit\n";
}

void printValues(double inputA, double inputB) {
    if (inputA < inputB) {
	cout << "The smaller value is: " << inputA <<
	    ", the larger value is: " << inputB << '\n';
    }
    if	(inputB < inputA) {
	cout << "The smaller value is: " << inputB <<
	    ", the larger value is: " << inputA << '\n';
    }
    if (inputB == inputA) {
	cout << "the numbers are equal\n";
    }
}

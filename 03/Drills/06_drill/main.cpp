#include "../../../PPP.h"

int main() {
    string tmp;
    double smallestNumber;
    double largestNumber;
    double tmpNumber;
    bool isInitialized= false;
    while (true) {
	cout << "Enter number: ";
	cin >> tmp;
	if (tmp == "|") break;
	try {
	    tmpNumber= stod(tmp);
	} catch (std::invalid_argument) {
	    cout << "Wrong input!\n";
	    continue;
	}
	if (!isInitialized) {
	    smallestNumber= tmpNumber;
	    largestNumber= tmpNumber;
	    isInitialized= true;
	}
	if (smallestNumber > tmpNumber) {
	    cout << "the smallest so far\n";
	    smallestNumber= tmpNumber;
	}
	if (largestNumber < tmpNumber) {
	    cout << "the largest so far\n";
	    largestNumber= tmpNumber;
	}
    }
    cout << "Exit\n";
}

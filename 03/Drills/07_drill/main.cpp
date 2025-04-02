// https://stackoverflow.com/questions/257091/how-do-i-flush-the-cin-buffer
#include "../../../PPP.h"
#include <stdio.h>
double stringToDistance(string);
int main() {
    double smallestNumber;
    double largestNumber;
    double tmpNumber;
    string mesurement;
    bool isInitialized= false;
    string tmp;
    while (true) {
	cout << "Enter number with measurement: ";
	std::getline(std::cin, tmp);
	if (tmp.find("|") != string::npos) break;
	size_t pos = tmp.find_first_of("0123456789");
	if (pos != std::string::npos) {
	    size_t endPos = tmp.find_first_not_of("0123456789.", pos);
	    if (endPos == std::string::npos) {
		endPos = tmp.length();
	    }
	    tmpNumber = std::stod(tmp.substr(pos, endPos - pos));
	} else {
	    cout << "Error!\n";
	    continue;
	}

	double multiplier= 1;
	if (tmp.find("cm") != string::npos) {
	    multiplier= 1;
	    goto calc;
	}
	if (tmp.find("in") != string::npos) {
	    multiplier= 2.54;
	    goto calc;
	}
	if (tmp.find("ft") != string::npos) {
	    multiplier= 12 * 2.54;
	    goto calc;
	}
	if (tmp.find("m") != string::npos) {
	    multiplier= 100;
	    goto calc;
	}

      calc:
	tmpNumber *= multiplier;

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

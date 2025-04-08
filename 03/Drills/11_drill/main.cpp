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
    double totalSum= 0;
    int numsCount= 0;
    std::vector<double> enteredNumbers;
    while (true) {
	cout << "Enter number with measurement: ";
	std::getline(std::cin, tmp);
	if (tmp.find("|") != string::npos) break;
	size_t pos = tmp.find_first_of("0123456789");
	size_t endPos;
	if (pos != std::string::npos) {
	    endPos = tmp.find_first_not_of("0123456789.", pos);
	    if (endPos == std::string::npos) {
		endPos = tmp.length();
	    }
	    tmpNumber = std::stod(tmp.substr(pos, endPos - pos));
	} else {
	    cout << "Error!\n";
	    continue;
	}

	size_t measurePos = tmp.find_first_not_of("0123456789. ", endPos);
	if (measurePos == std::string::npos) {
	    cout << "There is no measurements!\n";
	    continue;
	}

	size_t measureEnd = tmp.find_first_of(" ", measurePos);
	if (pos == std::string::npos) {
	    measureEnd = tmp.length();
	}
	string unit= tmp.substr(measurePos, measureEnd - measurePos);
	double multiplier= 1;
	if (unit == "cm") {
	    multiplier= 1;
	    goto calc;
	}
	if (unit == "in") {
	    multiplier= 2.54;
	    goto calc;
	}
	if (unit == "ft") {
	    multiplier= 12 * 2.54;
	    goto calc;
	}
	if (unit == "m") {
	    multiplier= 100;
	    goto calc;
	}

	cout << "Illegal unit! Ignoring.\n";
	continue;

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
	totalSum += tmpNumber;
	numsCount++;
	enteredNumbers.push_back(((double)tmpNumber) / 100);
    }
    if (isInitialized) {
	cout << "The smallest number: " << smallestNumber << '\n';
	cout << "The largest number: " << largestNumber << '\n';
	cout << "Total sum: " << totalSum / 100 << " meters\n";
	cout << "Numbers count: " << numsCount << '\n';
    }
    ranges::sort(enteredNumbers);
    for (double n : enteredNumbers) {
	cout << n << " ";
    }
    cout << '\n';
    cout << "Exit\n";
}

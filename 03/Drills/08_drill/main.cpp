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

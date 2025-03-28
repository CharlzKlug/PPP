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
    // cin >> tmp;
    // tmpNumber= stod(tmp);
    // cout << tmpNumber;
    // exit(0);
    while (true) {
	cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max());
	cout << "Enter number with measurement: ";
	cin >> tmp;
	if (tmp.find("|") != string::npos) break;
	// std::string str = "The value is 3.14";
	size_t pos = tmp.find_first_of("0123456789");
	if (pos != std::string::npos) {
	    size_t endPos = tmp.find_first_not_of("0123456789.", pos);
	    if (endPos == std::string::npos) {
		endPos = tmp.length();
	    }
	    tmpNumber = std::stod(tmp.substr(pos, endPos - pos));
	    // Use the value
	} else {
	    cout << "Error!\n";
	    continue;
	}

	// try {
	//     tmpNumber= stod(tmp);
	// } catch (std::invalid_argument) {
	//     cout << "Wrong input!\n";
	//     continue;
	// }
	// cin >> mesurement;
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

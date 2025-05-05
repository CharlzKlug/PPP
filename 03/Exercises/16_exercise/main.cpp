#include "../../../PPP.h"
int main() {
    vector<string> strings;
    string someString;
    while (cin >> someString) {
	strings.push_back(someString);
    }
    sort(strings.begin(), strings.end());
    string modeStringOne;
    int modeStringOneCount= 0;
    string modeStringTwo;
    int modeStringTwoCount= 0;
    for (string currentString : strings) {
	if (modeStringTwoCount > 0 &&
	    modeStringTwoCount >= modeStringOneCount) {
	    modeStringOne = modeStringTwo;
	    modeStringOneCount = modeStringTwoCount;
	    modeStringTwoCount = 0;
	}
	if (modeStringOneCount == 0) {
	    modeStringOne = currentString;
	    modeStringOneCount = 1;
	    continue;
	}
	if (modeStringOne == currentString) {
	    modeStringOneCount++;
	    continue;
	}
	if (modeStringTwoCount == 0) {
	    modeStringTwo = currentString;
	    modeStringTwoCount = 1;
	    continue;
	}
	if (modeStringTwo == currentString) {
	    modeStringTwoCount++;
	    continue;
	}
    }

    if (!strings.empty()) {
	cout << "Minimum of string is \"" << strings[0] << "\"\n";
	cout << "Maximum of string is \"" << strings.back() << "\"\n";
	cout << "Mode is " << modeStringOne << ": " <<
	    modeStringOneCount << ".\n";
    }
}

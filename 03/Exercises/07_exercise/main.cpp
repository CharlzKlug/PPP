#include "../../../PPP.h"

const vector<string> numbersNames = {"zero", "one", "two", "three",
    "four", "five", "six", "seven", "eight", "nine"};
int wordToInt(string);

int main() {
    string word;
    while (cin >> word) {
	int parsedInt = wordToInt(word);
	if (0 <= parsedInt && parsedInt <= 9) {
	    cout << wordToInt(word) << '\n';
	} else {
	    cout << "Wrong input!\n";
	}
    }
    return (0);
}

int wordToInt(string inputString) {
    size_t result = 0;
    for (; result < numbersNames.size(); result++){
	if (numbersNames[result] == inputString) {
	    break;
	}
    }
    return result;
}

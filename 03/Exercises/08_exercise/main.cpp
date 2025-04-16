#import "../../../PPP.h"

const vector<string> numbersNames = {"zero", "one", "two", "three",
    "four", "five", "six", "seven", "eight", "nine"};
int wordToInt(string);

int main() {
    string str;
    cin >> str;
    double a = wordToInt(str);
    if (10 == a) {
	cout << "Wrong number!\n";
	return (-1);
    }

    cin >> str;
    double b = wordToInt(str);
    if (10 == b) {
	cout << "Wrong number!\n";
	return (-1);
    }

    char operation;
    cin >> operation;
    switch (operation) {
    case '+':
	cout << "The sum of " << a << " and " << b << " is " << a + b << '\n';
	break;
    case '-':
	cout << "The subtract of " << a << " and " << b << " is " << a - b
	     << '\n';
	break;
    case '*':
	cout << "The multiply of " << a << " and " << b << " is " << a * b
	     << '\n';
	break;
    case '/':
	if (0 == b) {
	    cout << "Error! The divider is zero\n";
	} else {
	    cout << "The division of " << a << " and " << b << " is " << a / b
		 << '\n';
	}
	break;

    default:
	cout << "Unknown operation!\n";
    }
    return 0;
}

int wordToInt(string inputString) {
    size_t result;
    try {
	result = stoi(inputString);
	return result;
    } catch (invalid_argument) {}

    result = 0;
    for (; result < numbersNames.size(); result++){
	if (numbersNames[result] == inputString) {
	    break;
	}
    }
    return result;
}

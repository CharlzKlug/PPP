#import "../../../PPP.h"

int main() {
    double a;
    cin >> a;
    double b;
    cin >> b;
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

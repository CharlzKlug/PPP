#include "../../../PPP.h"

#define LOWER_BOUND 1
#define HIGHER_BOUND 101

int meanValue(int inputLowerBound, int inputHigherBound);

int main() {
    int lowerBound = (LOWER_BOUND);
    int higherBound = (HIGHER_BOUND);
    while (true) {
	int guessValue = meanValue(lowerBound, higherBound);
	cout << "Is your value " << guessValue << "? (Lower/Higher/Exactly)\n";
	char userAnswer;
	cin >> userAnswer;

	switch (userAnswer) {
	case 'e':
	case 'E':
	    cout << "I win! Game Over.\n";
	    return 0;
	case 'l':
	case 'L':
	    higherBound = guessValue;
	    break;
	case 'h':
	case 'H':
	    lowerBound = guessValue;
	    break;
	default:
	    cout << "Wrong input!\n";
	}
    }
    return 0;
}

int meanValue(int inputLowerBound, int inputHigherBound) {
    return (inputLowerBound + inputHigherBound) / 2;
}

#include "../../../PPP.h"
int main() {
    vector<int> numbers;
    int num;
    while (cin >> num) {
	numbers.push_back(num);
    }
    sort(numbers.begin(), numbers.end());
    int modeNumberOne;
    int modeNumberOneCount= 0;
    int modeNumberTwo;
    int modeNumberTwoCount= 0;
    for (int number : numbers) {
	if (modeNumberTwoCount > 0 &&
	    modeNumberTwoCount >= modeNumberOneCount) {
	    modeNumberOne = modeNumberTwo;
	    modeNumberOneCount = modeNumberTwoCount;
	    modeNumberTwoCount = 0;
	}
	if (modeNumberOneCount == 0) {
	    modeNumberOne = number;
	    modeNumberOneCount = 1;
	    continue;
	}
	if (modeNumberOne == number) {
	    modeNumberOneCount++;
	    continue;
	}
	if (modeNumberTwoCount == 0) {
	    modeNumberTwo = number;
	    modeNumberTwoCount = 1;
	    continue;
	}
	if (modeNumberTwo == number) {
	    modeNumberTwoCount++;
	    continue;
	}
    }
    cout << modeNumberOne << ':' << modeNumberOneCount << '\n';
}

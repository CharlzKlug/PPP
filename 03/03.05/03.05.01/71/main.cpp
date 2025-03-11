#include "../../../../PPP.h"

int square(int);

int main() {
    cout << square(3) << '\n';
    return (0);
}

int square(int inputNumber) {
    int result= 0;
    for (int i= 0; i < inputNumber; i++) {
	result+=inputNumber;
    }
    return result;
}

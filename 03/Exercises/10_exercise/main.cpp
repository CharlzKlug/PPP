#include "../../../PPP.h"
int main() {
    int currentSquareRice = 1;
    int totalRice = 0;
    for (int i = 1; i <= 64; i++) {
	totalRice += currentSquareRice;
	currentSquareRice *= 2;
	cout << "Current Total: " << totalRice << '\n';
    }
    cout << totalRice << '\n';

    double currentSquareRiceDouble = 1;
    double totalRiceDouble = 0;
    for (int i = 1; i <= 64; i++) {
	totalRiceDouble += currentSquareRiceDouble;
	currentSquareRiceDouble *= 2;
	cout << "Current Total: " << totalRiceDouble << '\n';
    }
    cout << totalRiceDouble << '\n';

}

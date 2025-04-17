#include "../../../PPP.h"

#define mulCoeff 2

int main() {
    int riceRequired;
    cin >> riceRequired;
    int totalRice = 0;
    int currentRice = 1;
    int step = 0;
    while (totalRice < riceRequired) {
	step++;
	currentRice *= (mulCoeff);
	totalRice += currentRice;
	cout << "Step: " << step << ", total rice: " << totalRice << '\n';
    }
}

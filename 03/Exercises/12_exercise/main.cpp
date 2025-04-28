#include "../../../PPP.h"
vector<int> primes = {2, 3};
bool isPrimeNumber(int);
int main() {
    for(int i= 2; i <= 100; i++) {
	if (isPrimeNumber(i)) {
	    primes.push_back(i);
	}
    }
    for (int prime : primes) {
	cout << prime << " ";
    }
    cout << '\n';
}
bool isPrimeNumber(int inputNumber) {
    for (int prime : primes) {
	if (inputNumber % prime == 0) {
	    return false;
	}
	if (inputNumber < prime) {
	    return true;
	}
    }
    return true;
}

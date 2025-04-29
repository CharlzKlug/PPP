#include "../../../PPP.h"
vector<int> primes = {2, 3};
bool isPrimeNumber(int);
int main() {
    cout << "Enter positive integer value: ";
    int n;
    cin >> n;
    for(int i= 2; i <= n; i++) {
	if (isPrimeNumber(i)) {
	    primes.push_back(i);
	}
    }
    for (int prime : primes) {
	if (prime <= n) {
	    cout << prime << " ";
	}
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

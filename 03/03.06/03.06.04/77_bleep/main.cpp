#include "../../../../PPP.h"

const string disliked= "BROCCOLI PEACH";
bool isDisliked(string inputWord) {
    transform(inputWord.begin(), inputWord.end(), inputWord.begin(), ::toupper);
    if (disliked.find(inputWord) != std::string::npos) {
	return true;
    }
    return false;
}

int main() {
    for (string temp; cin >> temp;) {
	if (isDisliked(temp)) {
	    cout << "BLEEP\n";
	} else {
	    cout << temp << '\n';
	}
    }
}

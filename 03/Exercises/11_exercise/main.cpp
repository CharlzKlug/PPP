#include "../../../PPP.h"
#include <cstdlib>
#include <fstream>

#define ROCK 'r'
#define PAPER 'p'
#define SCISSORS 's'

bool playerWinP(char, char);
char intToChoice(int);

int main() {
    for (int i = 0; i < 10; i++) {
	cout << rand() % 3 << '\n';
    }
    char userInput;
    while (!cin.eof()) {
	cout << "Enter [R]ock/[P]aper/[S]cissors:";
	cin >> userInput;
	char computerChoice = intToChoice(rand() % 3);
	if (playerWinP(computerChoice, userInput)) {
	    cout << "You win!\n";
	} else {
	    cout << "You lose!\n";
	}
	cout << "My choice was: " << computerChoice << '\n';
    }
}

bool playerWinP(char inputComputer, char inputPlayer) {
    /* R --- Rock,
       P --- Paper,
       S --- Scissors
    */
    if ((ROCK) == inputComputer && (PAPER) == inputPlayer) {
	return true;
    }
    if ((PAPER) == inputComputer && (SCISSORS) == inputPlayer) {
	return true;
    }
    if ((SCISSORS) == inputComputer && (ROCK) == inputPlayer) {
	return true;
    }
    return false;
}
char intToChoice(int inputNum) {
    if (0 == inputNum) {return 'r';}
    if (1 == inputNum) {return 'p';}
    return 's';
}

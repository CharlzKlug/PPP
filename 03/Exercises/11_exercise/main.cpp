#include "../../../PPP.h"
#include <cstdlib>
#include <fstream>

#define ROCK 'r'
#define PAPER 'p'
#define SCISSORS 's'

enum GameStatus {Win, Lose, Draw};
GameStatus playerWinP(char, char);
char intToChoice(int);

int main() {
    char userInput;
    while (!cin.eof()) {
	cout << "Enter [R]ock/[P]aper/[S]cissors:";
	cin >> userInput;
	char computerChoice = intToChoice(rand() % 3);
	GameStatus gameResult = playerWinP(computerChoice, userInput);
	switch (gameResult) {
	case GameStatus::Win:
	    cout << "You win!\n";
	    break;
	case GameStatus::Draw:
	    cout << "Draw!\n";
	    break;
	case GameStatus::Lose:
	    cout << "You lose!\n";
	    break;
	default:
	    break;
	}
	cout << "My choice was: " << computerChoice << '\n';
    }
}

GameStatus playerWinP(char inputComputer, char inputPlayer) {
    /* R --- Rock,
       P --- Paper,
       S --- Scissors
    */
    if (((ROCK) == inputComputer && (PAPER) == inputPlayer) ||
	((PAPER) == inputComputer && (SCISSORS) == inputPlayer) ||
	((SCISSORS) == inputComputer && (ROCK) == inputPlayer)) {
	return GameStatus::Win;
    }
    if (inputComputer == inputPlayer) {
	return GameStatus::Draw;
    }
    return GameStatus::Lose;
}
char intToChoice(int inputNum) {
    if (0 == inputNum) {return 'r';}
    if (1 == inputNum) {return 'p';}
    return 's';
}

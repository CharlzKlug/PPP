#include "../../../PPP.h"

bool presentP(vector<string>*, string);
void printLists(vector<string>*, vector<int>*);

int main() {
    string someString;
    getline(cin, someString);
    cout << someString << '\n';
    return 0;
    vector<string> names;
    vector<int> scores;

    string name;
    int score;
    while (true) {
	cout << "Enter name and score [name score] or [NoName 0] for exit: ";
	cin >> name;
	cin >> score;
	if (name == "NoName" && score == 0) {break;}
	if (presentP(&names, name)) {
	    cout << "This name already present!\n"; continue;
	}
	names.push_back(name);
	scores.push_back(score);
    }
    printLists(&names, &scores);
}

bool presentP(vector<string>* inputVector, string element) {
    if (count(inputVector->begin(), inputVector->end(), element) != 0) {
	return true;
    }
    return false;
}

void printLists(vector<string>* inputNames, vector<int>* inputScores) {
    size_t namesSize = inputNames->size();
    size_t scoresSize = inputScores->size();
    for (size_t i= 0; i < namesSize || i < scoresSize; i++) {
	if (i < namesSize) {cout << (*inputNames)[i];} else
	    {cout << "[No name]";}
	cout << ' ';
	if (i < scoresSize) {cout << (*inputScores)[i];} else
	    {cout << "[No score]";}
	cout << '\n';
    }
}

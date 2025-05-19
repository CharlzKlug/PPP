#include "../../../PPP.h"
#include <sstream>

bool presentP(vector<string>*, string);
void printLists(vector<string>*, vector<int>*);
int searchName(vector<string>*, const string*);

int main() {
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
    while (true) {
	cout << "Enter name or [NoName] for exit: ";
	cin >> name;
	if (name == "NoName" && score == 0) {break;}
	int nameIndex = searchName(&names, &name);
	if (nameIndex > -1) {
	    cout << "User: " << names[nameIndex] << ", Score: "
		 << scores[nameIndex] << '\n';
	} else {
	    cout << "Name '" << name <<"' not found!\n";
	}
    }
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

int searchName(vector<string>* inputVector, const string* inputName) {
    size_t vectorSize = inputVector->size();
    for (size_t i = 0; i < vectorSize; i++) {
	if (*inputName == (*inputVector)[i]) {return i;}
    }
    return (-1);
}

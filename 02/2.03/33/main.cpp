#include "PPP.h"

int main() {
    cout << "Please enter your first name and age\n";
    string firstName= "";
    double age= -1;
    cin >> firstName >> age;
    cout << "Hello, " << firstName << " (" << (age * 12) << " months)\n";
    return (0);
}

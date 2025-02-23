#include "PPP.h"

int main() {
  cout << "Enter your age: ";
  int age;
  cin >> age;
  if (age > 0 && age < 110) {
    cout << "I hear you just had a birthday and you are " << age
	 << " years old.\n";
    exit (0);
  }
  simple_error("you're kidding!");
}

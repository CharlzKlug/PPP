#include "PPP.h"

// Drill 05.

// Add this to your letter:

/*
  If your friend is under 12, write "Next year you will be
  age+1." If your friend is 17, write "Next year you will
  be able to vote." If your friend is over 70, write "Are you retired?"
*/

int main() {
  cout << "Enter your age: ";
  int age;
  cin >> age;
  if (age > 110) {
      simple_error("you're kidding!");
      exit(0);
  }
  if (age < 12) {
      cout << "Next year you will be " << age + 1 << '\n';
      exit (0);
  }
  if (age == 17) {
      cout << "Next year you will be able to vote.\n";
      exit (0);
  }
  if (age > 70) {
      cout << "Are you retired?\n";
  }

}

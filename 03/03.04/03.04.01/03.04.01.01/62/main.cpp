#include "PPP.h"

int main() {
  constexpr double yen_to_dollar= 0.1;
  constexpr double kroner_to_dollar= 56;
  constexpr double pounds_to_dollar= 101.45;
  double currency= 1;
  char unit;
  cout << "Please enter a currency followed by a unit (y, k or p):\n";
  cin >> currency >> unit;
  if (unit == 'y')
    cout << currency << " yen == " << currency * yen_to_dollar << " dollars\n";
  else if (unit == 'k')
    cout << currency << " kroner == " <<
      currency * kroner_to_dollar << " dollars\n";
  else if (unit == 'p')
    cout << currency << " pounds == " <<
      currency * pounds_to_dollar << " dollars\n";
  else
    cout << "Sorry, I don't know a unit called '" << unit << "'\n";
}

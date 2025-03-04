#include "PPP.h"

int main() {
  int a= 0;
  int b= 0;
  cout << "Please enter two integers\n";
  cin >> a >> b;

  if (a<b)
    cout << a << " is smaller than " << b << '\n';
  else
    cout << a << " is larger than or equal to " << b << '\n';
}

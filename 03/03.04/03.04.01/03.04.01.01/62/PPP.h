// PPP.h
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

// write ``error: s'' and exit program
// (for non-exception terminating error handling)
inline void simple_error(string s)
{
  cerr << "error: " << s << '\n';
  exit(1);
}

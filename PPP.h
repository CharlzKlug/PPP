// PPP.h
#include <iostream>
#include <cmath>
#include <vector>
#include <ranges>
#include <algorithm>
#include <map>

using namespace std;

// write ``error: s'' and exit program
// (for non-exception terminating error handling)
inline void simple_error(const string* s)
{
  cerr << "error: " << *s << '\n';
  exit(1);
}

inline void error(const string* s) {
  return simple_error(s);
}

inline void error(const char* msg) {
    cerr << msg << '\n';
    exit(1);
}

inline void expect(bool cond, std::string mess) {
    if (!cond) {error(&mess);}
}

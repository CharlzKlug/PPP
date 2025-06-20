// PPP.h
#include <iostream>
#include <cmath>
#include <vector>
#include <ranges>
#include <algorithm>
#include <map>
#include <random>

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

std::default_random_engine engine;


inline int random_int(int min, int max) {
    uniform_int_distribution<int> dist(min, max);
    return dist(engine);
}

inline int random_int(int max) {
    return random_int(0, max);
}

//-------- narrowing --------

template <class T, class U>
constexpr T narrow_cast(U&& u) noexcept
{
    return static_cast<T>(std::forward<U>(u));
}

struct narrowing_error : public std::exception
{
    const char* what() const noexcept override { return "narrowing_error"; }
};

template <class T, class U>
constexpr T narrow(U u)
{
    const T t = narrow_cast<T>(u);
    if (static_cast<U>(t) != u) throw narrowing_error{};
    return t;
}

string random_letters(int n, int m) {
    string s(random_int(n, m), 'x');
    for(char& ch : s)
        ch = narrow<char>(random_int('a', 'z'));
    return s;
}

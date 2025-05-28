#include "../../../PPP.h"

int area(int x, int y) {
  if (x <= 0 || y <= 0) {
    string errorStr = "non-positive area() argument";
    simple_error(&errorStr);
  }
  return x * y;
}

constexpr int frame_width = 2;

int framed_area(int x, int y) {
  return area(x - frame_width, y - frame_width);
}

int main() {
  // cout << area(-1, 2) << '\n';
  cout << framed_area(9, 9) << '\n';
}

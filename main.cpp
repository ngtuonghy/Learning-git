#include <iostream>

template <class T> T add(T a, T b) { return a + b; }

int main(int argc, char *argv[]) {
  add(18, 17);
  return 0;
}

#include <iostream>

template <class T> T add(T a, T b) { return a + b; }

int main(int argc, char *argv[]) {
  add(18, 17);
  add(1.3,1.5);
  std::cout<< "hello";
  return 0;
}

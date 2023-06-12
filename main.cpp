#include <iostream>

template <class T> T add(T a, T b) { return a + b; }

int main(int argc, char *argv[]) {
  add(18, 17);
<<<<<<< HEAD
  add(1.3, 1.5);
  std::cout << "xin chao the gioi";
=======
  add(1.3,1.5);
  std::cout<< "hello";
>>>>>>> 99cace88ee86a98e974eabf5ad215ddb60075aef
  return 0;
}

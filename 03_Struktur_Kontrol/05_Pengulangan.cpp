#include <iostream>
#include <cstdlib>


int main() {

  std::cout << "For to Do" << '\n';
  for (int a = 0; a < 10; a++) {
    std::cout << a << '\n';
  }
  std::cout << '\n';

  std::cout << "While Do" << '\n';
  int b = 10;
  while (b <= 20) {
    std::cout << b << '\n';
    b++;
  }
  std::cout << '\n';

  std::cout << "Do While" << '\n';
  int c = 20;
  do {
    std::cout << c << '\n';
    c++;
  } while (c <= 30);
  std::cout << '\n';

  std::cout << "For Break" << '\n';
  for (int d = 30; d < 40; d++) {
    std::cout << d << '\n';
    if (d == 35) {
      break;
    }
  }
  std::cout << '\n';

  std::cout << "For Continue" << '\n';
  for (int e = 40; e < 50; e++) {
    if (e % 2 == 1) {
      continue;
    }
    if (e == 42) {
      continue;
    }
    std::cout << e << '\n';
  }
  std::cout << '\n';

  return 0;
}

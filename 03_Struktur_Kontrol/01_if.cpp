#include <iostream>
#include <cstdlib>

int main() {
  double a, b, c;

  std::cout << "Masukan Nilai a: ";
  std::cin >> a;
  std::cout << "Masukan Nilai b: ";
  std::cin >> b;

  if (b == 0) {
    std::cout << "Ga boleeeeh di bagi nol, ntar hasilnya tak hingga" << std::endl;
    exit(EXIT_FAILURE);
  }
  c = a / b;
  std::cout << "Hasil Baginya adalah "
            << c
            << std::endl;
  return 0;
}

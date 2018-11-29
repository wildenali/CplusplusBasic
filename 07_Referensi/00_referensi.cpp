#include <iostream>
// nama alias
// ipte &namaReferensi = namaVariable


// == Contoh LAIN, DITUKER POSISI ==
void swap(int &a, int &b) {
  int c = a;
  a = b;
  b = c;
}

int main() {

  // == REFERENSI ==
  std::cout << "REFERENSI" << '\n';
  int a;
  int &ref = a;

  a = 10;
  std::cout << "Setelah a diubah di ubah menjadi 10, maka ref juga berubah menjadi 10" << '\n';
  std::cout << "a\t" << a << '\n';
  std::cout << "ref\t" << ref << '\n';

  ref = 20;
  std::cout << "Setelah ref diubah di ubah menjadi 20, maka a juga berubah menjadi 20" << '\n';
  std::cout << "a\t" << a << '\n';
  std::cout << "ref\t" << ref << '\n';

  std::cout << std::endl << '\n';



  // == Contoh LAIN, DITUKER POSISI ==
  std::cout << "TUKAR POSISI" << '\n';
  int x = 100;
  int y = 200;

  std::cout << "Sebelum ditukar" << '\n';
  std::cout << "x\t" << x << '\n';
  std::cout << "y\t" << y << '\n';

  swap(x, y);

  std::cout << "Setelah ditukar" << '\n';
  std::cout << "x\t" << x << '\n';
  std::cout << "y\t" << y << '\n';

  std::cout << std::endl << '\n';




  return 0;
}

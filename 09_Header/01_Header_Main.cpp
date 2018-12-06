#include "segiempat.h"
#include <iostream>

int main() {
  // Membuat objek dari kelas Segiempat
  Segiempat *obj = new Segiempat(10, 43);

  // Memanggil fungsi Segiempat::luas()
  std::cout << "Luas Segiempat: \t"
            << obj->luas()
            << std::endl;

  // Menghapus objek
  delete obj;

  return 0;
}

// Cara Kompilasinya adalah
/*
$ sudo g++ -Wall 01_Header_Main.cpp 01_Header_Basic.cpp -o 01_Header

atau


$ sudo -Wall 01_Header_Main.cpp 01_Header_Basic.cpp -o 01_Header
*/

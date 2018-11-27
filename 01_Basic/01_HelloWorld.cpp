#include <iostream>

int main() {
  std::cout << "hay gaays" << std::endl;
  std::cin.get();    // fungsi ini untuk keluar, jadi kalau mencet apa aja di keyboar, ntar di terminal nya menyelesaikan program
  return 0;
}

/*
  Versi 1
  Nah cara menjalankannya adalah
  1. Buka Terminal
  2. Masuk ke dalam directory si File ini
  3. Tuliskan g++ 01_HelloWorld.cpp
  4. nah nanti akan menghasilkan file baru (biasanya a.out)
  5. si a.out ini file apps nya, buat mengeksekusinya caranya
  6. Ketik ./a.out
  7. lalu ENTER
  8. Keluar hasilnya di terminal
*/

/*
  Versi 2
  Nah cara menjalankannya adalah
  1. Buka Terminal
  2. Masuk ke dalam directory si File ini
  3. Tuliskan g++ -Wall 01_HelloWorld.cpp -o 01_HelloWorld    // -o 01_HelloWorld itu menggantikan nama bawaan si a.out, jadi namanya biar bagus gitu
  4. nah nanti akan menghasilkan file baru (biasanya a.out)
  5. si a.out ini file apps nya, buat mengeksekusinya caranya
  6. Ketik ./a.out
  7. lalu ENTER
  8. Keluar hasilnya di terminal
*/

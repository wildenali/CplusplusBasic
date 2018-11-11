#include <iostream>

// supaya tidak ribet kaya contoh 01_HelloWorld harus pakai std::XXXX
// nah biar gampang pakai aja namespace std, karena cout endl dll itu bagian dari namespace std, karena udah di siapkan biar lebih mudah
using namespace std;

int main() {
  cout << "hay gaays pake namespace std nih" << endl;
  return 0;
}

// Nah cara menjalankannya adalah
// 1. Buka Terminal
// 2. Masuk ke dalam directory si File ini
// 3. Tuliskan g++ 01_HelloWorld2.cpp
// 4. nah nanti akan menghasilkan file baru (biasanya a.out)
// 5. si a.out ini file apps nya, buat mengeksekusinya caranya
// 6. Ketik ./a.out
// 7. lalu ENTER
// 8. Keluar hasilnya di terminal


/*
  Versi 2
  Nah cara menjalankannya adalah
  1. Buka Terminal
  2. Masuk ke dalam directory si File ini
  3. Tuliskan g++ -Wall 01_HelloWorld2.cpp -o 01_HelloWorld2    // -o 01_HelloWorld2 itu menggantikan nama bawaan si a.out, jadi namanya biar bagus gitu
  4. nah nanti akan menghasilkan file baru (biasanya a.out)
  5. si a.out ini file apps nya, buat mengeksekusinya caranya
  6. Ketik ./a.out
  7. lalu ENTER
  8. Keluar hasilnya di terminal
*/

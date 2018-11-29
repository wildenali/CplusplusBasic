#include <iostream>
// Pointer
// tipe *namaPointer;
// cara mengapatkan alamat memori si pointer itu adalah &namaVariable


// == Pointer dalam Fungsi ==
void tambah(double l, double m, double *n) {
  *n = l + m;
}


int main() {

  // == POINTER ==
  // cara menggunakan pointer sederhana, amati hasil dari program ini, begitulah cara kerja pointer
  int *a, b = 5;
  // pointer a menunjukan ke alamat b
  a = &b;
  std::cout << b << '\n';
  std::cout << *a << '\n';

  b = 8;
  std::cout << b << '\n';
  std::cout << *a << '\n';

  *a = 11;
  std::cout << b << '\n';
  std::cout << *a << '\n';

  std::cout << "\n\n";



  // == pointer ALOKASI DINAMIS
  std::cout << "pointer ALOKASI DINAMIS";
  int *c = new int[3];

  *c = 10;
  c[1] = 20;
  c[2] = 50;

  for (int d = 0; d < 3; d++) {
    std::cout << c[d] << '\n';
  }

  delete [] c;  // cara dealokasi si pointer

  std::cout << "\n\n";


  // == Penambahan dan Pengurangan pada Pointer
  // Penambahan dan Pengurangan disini maksudnya pemindahan alamat pointer
  std::cout << "pointer _ Penambahan dan Pengurangan\n";

  int e[3] = {10, 20, 30};
  int *f;

  f = &e[0];    // pointer f menunjukan ke alamat dari elemen pertama array e
  std::cout << *f << '\n';

  // MeNAMBAH pointer dengan 1
  f += 1;
  std::cout << *f << '\n';

  // MeNAMBAH pointer dengan 1
  f += 1;
  std::cout << *f << '\n';

  // MeNGURANGI pointer dengan 1
  f -= 1;
  std::cout << *f << '\n';
  // MeNGURANGI pointer dengan 1

  f -= 1;
  std::cout << *f << '\n';

  f += 2;
  std::cout << *f << '\n';

  std::cout << "\n\n";


  // == Pointer ke Pointer atau MULTIPLE INDIRECTION
  // pointer yang dapat menyimpan alamat memori dari pointer lain
  // deklarasi pointer dengan menggunakan 2 buah bintang
  // **p
  std::cout << "MULTIPLE INDIRECTION, pointer ke pointer\n";
  int g = 5;      // variable normal
  int *h = &g;    // pointer yang menunjuk ke alamat dari variable g
  int **i = &h;   // pointer yang menunjuk ke alamat dari pointer h

  std::cout << "g \t: "
            << g << std::endl;

  std::cout << "*h \t: "
            << *h << std::endl;

  std::cout << "**i \t: "
            << **i << std::endl << std::endl;

  std::cout << "&g \t: "
            << &g << std::endl;

  std::cout << "h \t: "
            << h << std::endl;

  std::cout << "*i \t: "
            << *i << std::endl << std::endl;

  std::cout << "&h \t: "
            << &h << std::endl;

  std::cout << "i \t: "
            << i << std::endl << std::endl;

  std::cout << "\n\n";



  // == Pointer NULL ==
  // tidak menunjuk ke alamat manapun
  std::cout << "Pointer NULL\n";
  int j;
  int *k;

  k = NULL;
  k = &j;
  std::cout << k << '\n';

  std::cout << "\n\n";



// == Pointer dalam FUNGSI ==
std::cout << "Pointer dalam FUNGSI\n";
double o;
// memanggil fungsi tambah()
tambah(4.3, 5.3, &o);

std::cout << "Hasilnya adalah " << o << '\n';

std::cout << "\n\n";















  return 0;
}

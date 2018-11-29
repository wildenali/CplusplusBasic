#include <iostream>

int main() {

  int arr[5];

  for (int i = 0; i < 5; i++) {
    // Memasukan nilai ke dalam array
    arr[i] = (i+1) * 100;

    // Menampilkan nilai element array ke layar
    std::cout << arr[i] << std::endl;
  }

  int arrJ[5] = {10, 20, 30, 40, 50};
  for (int j = 0; j < 5; j++) {
    std::cout << arrJ[j] << std::endl;
  }

  // == ARRAY KONSTAN ==
  // Array Konstan, dia ini array yang tidak bisa diubah isini
  // Cara penulisannya menggunakan const
  std::cout << "\nArray KONSTAN" << '\n';
  const std::string hari[7] = {"Senin", "Selasa", "rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
  for (int k = 0; k < 7; k++) {
    std::cout << hari[k] << '\n';
  }
  std::cout << "\n\n";



  // == Array DUA DIMENSI ==
  // tipe namaArray[JumlahBaris][JumlahKolom]
  // cara mengkasesnya    namaArray[IndeksBaris][IndeksKolom]
  std::cout << "Array DUA DIMENSI" << '\n';
  std::string gorengan[5][2] = {
          {"cireng", "500"},
          {"cimol", "525"},
          {"cilok", "700"},
          {"combro", "400"},
          {"cilor", "650"}
        };

  for (int l = 0; l < 5; l++) {
    std::cout << gorengan[l][0]
              << '\t'
              << gorengan[l][1]
              << std::endl;
  }
  std::cout << "\n\n";


  // == Array DINAMIS ==
  // array dinamis maksudnya, jumlah elemen di dalam array dan lokasi memori ditentukan KETIKA kompilasi sedang berjalan
  // yang dibutuhkan adalah pointer dan kata kunci new supaya bisa dinamis array nya
  // dan delete untuk dealokasi elemen elemen saat array selesai digunakan dan tidak dibutuhkan lagi
  std::cout << "Array DINAMIS" << '\n';
  int m;
  double *dataArrayDinamis;
  double totalnya = 0.0;

  std::cout << "Masukan Jumlah Data " << '\n';
  std::cin >> m;

  dataArrayDinamis = new double[m];

  for (int n = 0; n < m; n++) {
    std::cout << "Data ke- "
              << n + 1
              << ": ";
    std::cin >> dataArrayDinamis[m];
    totalnya += dataArrayDinamis[m];
  }
  std::cout << "Rata-rata = "
            << totalnya / m
            << '\n';

  delete [] dataArrayDinamis;

  std::cout << "\n\n";



  // == Mendapatkan JUMLAH ELEMEN di dalam ARRAY
  // menggunakan sizeof()
  // catatan -> sizeof() TIDAK BISA digunakan untuk ARRAY DINAMIS
  std::cout << "Array SIZEOF()" << '\n';
  int o[3];
  double p[5];

  std::cout << "Jumlah elemen array o = "
            << sizeof(o) / sizeof(int)
            << std::endl;

  std::cout << "Jumlah elemen array p = "
            << sizeof(p) / sizeof(double)
            << std::endl;

  std::cout << '\n';
  int q[5] = {111, 222, 333, 444, 555};
  int r = sizeof(q) / sizeof(int);
  for (int s = 0; s < r; s++) {
    std::cout << q[s] << '\n';
  }
  std::cout << "\n\n";




  return 0;
}

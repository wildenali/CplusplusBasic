#include <iostream>

int main() {


    // ===== Basic Array =====
    int nilaiArray[6];
    nilaiArray[0] = 5;
    nilaiArray[1] = 1;
    nilaiArray[2] = 6;
    nilaiArray[3] = 57;
    nilaiArray[4] = 6689;
    //Deference (&) merupakan suatu operator yang berfungsi untuk 
        // menanyakan alamat dari suatu variabel. Apabila kamu memberikan
        // simbol & pada awal variabel dan mencetak hasilnya pada jendela
        // CLI, maka yang akan tercetak adalah alamat dari variabel 
        // tersebut bukan nilai yang ditampung oleh variabel tersebut
    std::cout << &nilaiArray[0] << " Nilainya adalah: " << nilaiArray[0] << std::endl;
    std::cout << &nilaiArray[1] << " Nilainya adalah: " << nilaiArray[1] << std::endl;
    std::cout << &nilaiArray[2] << " Nilainya adalah: " << nilaiArray[2] << std::endl;
    std::cout << &nilaiArray[3] << " Nilainya adalah: " << nilaiArray[3] << std::endl;
    std::cout << &nilaiArray[4] << " Nilainya adalah: " << nilaiArray[4] << std::endl;

    int *ptr = nilaiArray;
    *(ptr + 2) = 6;

    nilaiArray[3] = 7;
    std::cout << std::endl;
    std::cout << &nilaiArray[0] << " Nilainya adalah: " << nilaiArray[0] << std::endl;
    std::cout << &nilaiArray[1] << " Nilainya adalah: " << nilaiArray[1] << std::endl;
    std::cout << &nilaiArray[2] << " Nilainya adalah: " << nilaiArray[2] << std::endl;
    std::cout << &nilaiArray[3] << " Nilainya adalah: " << nilaiArray[3] << std::endl;
    std::cout << &nilaiArray[4] << " Nilainya adalah: " << nilaiArray[4] << std::endl;
    std::cout << std::endl;
    std::cout << "ukuran array = " << sizeof(nilaiArray) << " byte" << std::endl;
    std::cout << "jumlah member array = " << sizeof(nilaiArray)/sizeof(int) << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;



    // ===== Basic Array menggunakan for =====
    int arr[5];

    for(int i = 0; i < 5; i++)
    {
        // Memasukan nilai ke dalam array
        arr[i] = i+1;

        // Menampilkan nilai element array ke layar
        std::cout << arr[i] << std::endl;
    }
    
    int arrayIni[5] = {10, 20, 30, 40, 50};
    for(int j = 0; j < 5; j++)
    {
        std::cout << arrayIni[j] << std::endl;
    }

    /*
    ===== ARRAY KONSTAN =====
    Array konstan adalah array yang tidak bisa diubah isinya
    Cara penulisannya menggunakan const
    */
   std::cout << "\n===== ARRAY KONSTAN =====" << '\n';
   const std::string hari[7] = {"Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu", "Minggu"};
   for(int k = 0; k < 7; k++)
   {
       std::cout << hari[k] << '\n';
   }
   std::cout << "\n\n";
   
   /*
   ===== ARRAY DUA DIMENSI =====
   tipe namaArray[JumlahBaris][JumlahKolom]
   cara akses nya   namaArray[IndeksBaris][IndeksKolom]
   */
   std::cout << "===== ARRAY DUA DIMENSI =====" << '\n';
   std::string gorengan[5][2] = {
       {"cireng", "500"},
       {"cimol", "525"},
       {"cilok", "700"},
       {"combro", "400"},
       {"cilor", "650"}
   };

   for(int l = 0; l < 5; l++)
   {
       std::cout << gorengan[l][0] << '\t'  << gorengan[l][1] << std::endl;
   }
   std::cout << "\n\n";


   /*
   ===== ARRAY DINAMIS =====
   Array Dinamis maksudnya, jumlah elemen di dalam array dan lokasi memori
   ditentukan KETIKA kompilasi sedang berjalan 
   Yang dibutuhkan adalah pointer dan kata kunci new supaya bisa dinamis
   array nya dan delete untuk dealokasi elemen elemen saat array selesai
   digunakan dan tidak dibutuhkan lagi

   Jadi jumlah arraynya bisa berapa aja, ya tergantung berapa angka
   yang dimasukan untuk menentukan berapa jumlah array nya ketika
   programnya di jalankan
   */
   std::cout << "===== ARRAY DINAMIS =====" << '\n';
   int m;
   double *dataArrayDinamis;
   double totalnya = 0.0;

   std::cout << "Masukan Jumlah Data " << '\n';
   std::cin >> m;

   dataArrayDinamis = new double[m];

   for(int n = 0; n < m; n++)
   {
       std::cout << "Data ke- " << n + 1 << ": ";
       std::cin >> dataArrayDinamis[m];
       totalnya += dataArrayDinamis[m];
   }
   std::cout << "Rata-rata = " << totalnya / m << '\n';
   delete [] dataArrayDinamis;

   std::cout << "\n\n";


   /*
   ===== Mendapatkan JUMLAH ELEMEN di dalam ARRAY =====
   menggunakan sizeof()
   catatan -> sizeof() TIDAK BISA digunakan untuk ARRAY DINAMIS 
   */
   std::cout << "===== Array SIZEOF() =====" << '\n';
   int arrayO[3];
   double arrayP[5];
   std::cout << "Jumlah elemen array o = " << sizeof(arrayO) / sizeof(int) << std::endl;
   std::cout << "Jumlah elemen array p = " << sizeof(arrayP) / sizeof(double) << std::endl;
   std::cout << '\n';
   
   int arrayQ[5] = {111, 222, 333, 444, 555};
   int r = sizeof(arrayQ) / sizeof(int);
   for(int s = 0; s < r; s++)
   {
       std::cout << arrayQ[s] << '\n';
   }
   std::cout << "\n\n";
   

   return 0;

}
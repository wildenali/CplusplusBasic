#include <iostream>

using namespace std;

/*
Enum atau Enumeration merupakan tipe data yang berisi sekumpulan konstanta.

Enum termasuk dalam tipe data bentukan, karena tipe data ini dibuat sendiri oleh kita.
*/
enum warna {merah, putih, hitam, coklat = 5, kuning, biru};

int main(){

    warna kain;

    kain = hitam;
    if(kain == hitam){
        cout << "warna kain hitam" << endl;
    }
    cout << kain << endl << endl;

    kain = coklat;
    if(kain == coklat){
        cout << "warna kain coklat" << endl;
    }
    cout << kain << endl << endl;

    kain = kuning;
    if(kain == kuning){
        cout << "warna kain kuning" << endl;
    }
    cout << kain << endl << endl;

    return 0;
}
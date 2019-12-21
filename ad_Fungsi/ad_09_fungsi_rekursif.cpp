#include <iostream>

using namespace std;

/*
Fungsi rekursif adalah fungsi yang mengembalikan nilai
dirinya sendiri atau juga fungsi yang memanggil
dirinya sendiri
*/

// contoh fungsi rekursif terbatas
int pangkatIterasi(int a, int b) {
    int hasil = a;
    for(int i = 1; i < b; i++) {
        hasil = hasil * a;
    }
    return hasil;
}

int pangkatRekursif(int a, int b) {
    if(b <= 1) {
        cout << "akhir dari rekursif\n";
        return a;
    }else{
        cout << "rekursif\n";
        return a * pangkatRekursif(a,(b-1));
    }
}


int main() {
    int a;
    int b;
    cout << "angka: ";
    cin >> a;
    cout << "pangkat: ";
    cin >> b;
    cout << "hasil iterasi = " << pangkatIterasi(a, b) << endl;
    cout << "hasil rekursif = " << pangkatRekursif(a, b) << endl;

    return 0;
}
#include <iostream>

using namespace std;

int main() {
    int n;

    
    cout << "========== Pola 1 ==========\n";
    cout << "   Masukan panjang pola: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "$";
        }
        cout << endl;
    }
    /*
    Hasil Pola 1, misal panjang pola nya 4, maka hasilnya
    $
    $$
    $$$
    $$$$
    */

    cout << "========== Pola 2 ==========\n";
    cout << "   Masukan panjang pola: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = n; j >= i; j--) {
            cout << "$";
        }
        cout << endl;
    }
    /*
    Hasil Pola 1, misal panjang pola nya 4, maka hasilnya
    $$$$
    $$$
    $$
    $    
    */

    cout << "========== Pola 3 ==========\n";
    cout << "   Masukan panjang pola: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i; j++) {
            cout << " ";
        }
        for(int k = n; k >=i; k--) {
            cout << "$";
        }
        cout << endl;
    }
    /*
    Hasil Pola 1, misal panjang pola nya 4, maka hasilnya
    $$$$
     $$$
      $$
       $
    */

    cout << "========== Pola 4 ==========\n";
    cout << "   Masukan panjang pola: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = n; j > i; j--) {
            cout << " ";
        }
        for(int k = 1; k <=i; k++) {
            cout << "$";
        }
        cout << endl;
    }
    /*
    Hasil Pola 1, misal panjang pola nya 4, maka hasilnya
       $
      $$
     $$$
    $$$$
    */

    cout << "========== Pola 5 Fungsi Rekursif ==========\n";
    cout << "   Masukan panjang pola: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = n; j > i; j--) {
            cout << " ";
        }
        for(int k = 1; k <= (2*i - 1); k++) {
            cout << "$";
        }
        cout << endl;
    }
    /*
    Hasil Pola 1, misal panjang pola nya 4, maka hasilnya
       $
      $$$
     $$$$$
    $$$$$$$
    */

    cout << "========== Pola 6 Fungsi Rekursif ==========\n";
    cout << "   Masukan panjang pola: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j < i; j++){
			cout << " ";
		}
		for(int k = n; k >= (2*i - n); k--){
			cout << "$";
		}
		cout << endl;
    }
    /*
    Hasil Pola 1, misal panjang pola nya 4, maka hasilnya
       $
      $$$
     $$$$$
    $$$$$$$
    */


    return 0;
}
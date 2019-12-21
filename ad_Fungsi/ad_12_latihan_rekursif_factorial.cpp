#include <iostream>

using namespace std;

// prototype
int factorial(int n);

int main() {
    int angka, hasil;
    cout << "Menghitung faktorial dari : ";
    cin >> angka;

    hasil = factorial(angka);
    cout << "\nnilai faktorialnya adalah : " << hasil << endl;

    return 0;
}

int factorial(int n) {
    if(n <= 1) {
        cout << n;
        return n;
    }else{
        cout << n << "*";
        return n * factorial(n - 1);
    }
}
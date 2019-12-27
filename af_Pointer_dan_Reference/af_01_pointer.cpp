#include <iostream>

using namespace std;

int main() {
    /*
    Reference (*) merupakan suatu operator yang berfungsi MENYATAKAN
    suatu variabel adalah VARIABLE POINTER.
    Peletakan simbol operator reference diletakan diawal variabel.
    Operator reference ini akan membuat suatu variabel pointer untuk
    menampung alamat.
    */

    int x = 5;  // Memberikan nilai 5 pada variable x
    int *y;     // Mendeklarasikan variable y sebagai pointer
    y = &x;     // Mengkopikan alamat variable x ke dalam variable pointer b
    cout << "Nilai variable x                       : " << x << endl;
    cout << "Alamat variable x                      : " << &x << endl;
    cout << "Isi dari variable y                    : " << y << endl;
    cout << "Nilai yang tertampung dalam variable b : " << *y << endl;



    int a = 5;
    // pointer
    int *aPtr = nullptr;
    aPtr = &a;      // isi aPtr adalah alamat dari a

    // int a mempunyai nilai dan address
    cout << "\nnilai dari a   : " << a << endl;
    cout << "alamat dari a  : " << aPtr << endl;

    // dereferencing, mengambil data dari sebuah pointer
    a = 10;
    cout << "mengambil nilai dari pointer aPtr : " << *aPtr << endl;

    cin.get();
    return 0;

}
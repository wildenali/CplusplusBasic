#include <iostream>

using namespace std;

int main() {
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
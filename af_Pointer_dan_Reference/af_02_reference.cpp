#include <iostream>

using namespace std;

int main() {
    /*
    Deference (&) merupakan suatu operator yang 
    berfungsi untuk MENANYAKAN ALAMAT dari suatu variabel.
    Apabila kamu memberikan simbol & pada awal variabel dan
    mencetak hasilnya pada jendela CLI, maka yang akan 
    tercetak adalah alamat dari variabel tersebut bukan nilai 
    yang ditampung oleh variabel tersebut
    */
    // variable
    int a = 5;
    cout << "address dari a : " << &a << endl;
    cout << "nilai dari a   : " << a << endl;

    // Reference &
    int &b = a;
    cout << "address dari b : " << &b << endl;
    cout << "nilai dari b   : " << b << endl << endl;

    b = 10;
    cout << "nilai dari a : " << a << endl;
    cout << "nilai dari b : " << b << endl << endl;

    a = 20;
    cout << "nilai dari a : " << a << endl;
    cout << "nilai dari b : " << b << endl << endl;
    
    cin.get();
    return 0;
}
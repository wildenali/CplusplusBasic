#include <iostream>

using namespace std;

int main() {

    // looping untuk array di c++11 ke atas
    /*
            for(declarasi variable : array) {
                statement
            }
    */

    int arrayNilai[10] = {9,8,7,6,5,4,3,2,1,0};
    for(int nilai : arrayNilai) {
        cout << "address : " << &nilai << "\tnilainya : " << nilai << endl;
        nilai = 1;   // tidak merubah array
    }    
    cout << endl;

    // MANPULASI Array dengan menggunakan Referensi
    for(int &nilaiRef : arrayNilai) {
        nilaiRef *= 2;
    }
    cout << endl;

    for(int &nilaiRef: arrayNilai) {
        cout << "address : " << &nilaiRef << " nilainya: " << nilaiRef << endl;
    }

    return 0;
}
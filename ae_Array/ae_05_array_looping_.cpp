#include <iostream>
#include <array>

using namespace std;

int main() {

    // looping untuk array di c++11 ke atas
    /*
            for(declarasi variable : array) {
                statement
            }
    */

    array<int, 10>arrayNilai = {2,4,1,3,8,5,7,6,9,0};
    for(int nilai : arrayNilai) {
        cout << "address " << &nilai << " nilainya : " << nilai << endl;
        nilai = 1;  // tidak merubah array
    }
    cout << endl;

    // Memanipulasi array dengan menggunakan referensi
    for(int &nilaiRef : arrayNilai) {
        nilaiRef *= 2;
    }
    cout << endl;

    for(int &nilaiRef : arrayNilai) {
        cout << "address " << &nilaiRef << " nilainya: " << nilaiRef << endl;
    }


    return 0;
}
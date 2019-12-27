#include <iostream>
#include <string>

using namespace std;

int main(){
    
    string kalimat_1("Dayat suka olahraga supaya sehat");
    string kalimat_2("Ucup suka makan pisang di pagi hari");

    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl;

    // substring, mengambil string di tengah-tengah
    // substr(index, panjang)
    cout << kalimat_1.substr(11,8) << " ";
    cout << kalimat_2.substr(16,6) << endl;

    // mencari posisi dari string
    cout << "posisi olahraga : ";
    cout << kalimat_1.find("olahraga") << endl;
    cout << "posisi pisang : ";
    cout << kalimat_2.find("pisang") << endl;

    int a = kalimat_1.find("t");
    cout << "Mencari huruf t pada kalimat 1 ada di posisi ke : " << a << endl;
    cout << "Mencari huruf t setelah t pertama yang ditemukan adalah pada posisi ke : " << kalimat_1.find("t", a + 1) << endl;

    // mencari posisinya dari belakang -> rfind
    cout << "Mencari huruf i pada kalimat 2 tpi di mulai dari belakang mencarinya dan si i di posisi ke : " << kalimat_2.rfind("i") << endl;

    return 0;
}
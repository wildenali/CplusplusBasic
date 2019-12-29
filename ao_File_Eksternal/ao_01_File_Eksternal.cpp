#include <iostream>
#include <fstream>      // ofstream, ifstream, fstream

using namespace std;

int main(){
    ofstream myFile;

    /*
    ios::out = default, operasi output;
    ios::app = menuliskan pada akhir baris;
    ios::trunc = default, membuat file jika tidak ada, dan kalau ada akan dihapus
    */
    int a = 123876;
    myFile.open("ao_01_data1.txt", ios::out);
    myFile << "Menuliskan baris bari pada ao_01_data1\n";
    myFile << a;
    myFile.close();

    myFile.open("ao_01_data2.txt", ios::trunc);
    myFile << "Menuliskan baris bari pada ao_01_data2\n";
    myFile.close();

    myFile.open("ao_01_data3.txt", ios::app);   // append, di tambahkan
    myFile << "\nini baru lagi\n";
    myFile.close();




    return 0;
}
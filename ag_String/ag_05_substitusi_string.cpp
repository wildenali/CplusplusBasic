#include <iostream>
#include <string>

using namespace std;

int main(){
    string kalimat_1("aku suka kamu suka, siapa? dia!hmmmm, au ah");
    string kalimat_2("baru juga ketemu,,.,.");

    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl << endl;

    // SWAP string, swap itu di tukar posisi nya
    kalimat_1.swap(kalimat_2);
    cout << "SWAP string (TUKERAN)" << endl;
    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl << endl;

    // REPLACE string (GANTI)
    kalimat_2.replace(27,3,"otong");
    kalimat_1.replace(kalimat_1.find("ketemu"),2,"si eta");
    cout << "REPLACE string" << endl;
    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl << endl;

    // INSERT string (SISIPKAN)
    kalimat_1.insert(8,"dan hatiku");
    cout << "INSERT string" << endl;
    cout << "1: " << kalimat_1 << endl;
    cout << "2: " << kalimat_2 << endl;
    
    return 0;

}
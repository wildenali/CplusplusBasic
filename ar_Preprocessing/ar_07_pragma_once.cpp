#include <iostream>
#include "ar_07_bersama.h"
#include "ar_07_foo.h"
#include "ar_07_bar.h"


using namespace std;

/*
pragma once adalah jangan di buat berkali kali
*/


int main(){
    Mahasiswa mahasiswa;
    mahasiswa.NIM = 7;
    cout << mahasiswa.NIM << endl;

    return 0;
}

/*
NOTE
cara menghasilkan preprocessing(file.p) nya dengan cara
g++ -E ar_07_pragma_once.cpp -o ar_07_pragma_once.p
*/
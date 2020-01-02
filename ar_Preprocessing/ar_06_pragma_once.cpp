#include <iostream>
#include "ar_06_bersama.h"
#include "ar_06_foo.h"
#include "ar_06_bar.h"


using namespace std;

/*
pragma once adalah jangan di buat berkali kali
*/


int main(){
    Mahasiswa mahasiswa;
    mahasiswa.NIM = 10;
    cout << mahasiswa.NIM << endl;

    return 0;
}
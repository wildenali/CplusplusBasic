#include <iostream>
// #include "ar_06_foo.h"
#include "ar_06_bar.h"


using namespace std;

/*
karena FOO ada di ar_06_foo.h dan ar_06_bar.h
maka dibikinlah #ifdef di ar_06_bar.h
*/

// nah setelah di compile
// coba comment si #include "ar_06_foo.h" dan compile, lihat hasilnya, beda kan



int main(){
    cout << FOO << endl;

    return 0;
}
#include <iostream>

using namespace std;

/*
Bentuk penulisan dan cara pengaksesannya hampir sama
dengan struct. Namun, union digunakan untuk menyatakan
suatu memori dengan nama lebih dari satu.
Artinya, variabel-variabel yang ada di dalam union
menempati alamat memori yang sama
*/

union nama{
    int int_value;
    char char_value[4];
};

int main(){

    nama Otong;

    Otong.int_value = 12365499;

    cout << " data int_value: " << Otong.int_value << endl;
    cout << " data char_value: " << Otong.char_value << endl;

    Otong.char_value[0] = 'a';
    Otong.char_value[1] = 'b';
    Otong.char_value[2] = 'c';
    Otong.char_value[3] = 'd';

    cout << " data int_value: " << Otong.int_value << endl;
    cout << " data char_value: " << Otong.char_value << endl;

    return 0;

}
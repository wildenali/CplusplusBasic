#include <iostream>

// #define CILOK "cilok lama"

/*
#ifndef

dibaca jika tidak ada definisi nya
*/

// cara test nya, #define CILOK "cilok lama" di comment dulu 
// jadi kalau #define CILOK nya tidak ada, maka disini dibuatkan #define CILOK nya
#ifndef CILOK
    #define CILOK "cilok baru"
#endif

using namespace std;

int main(){
    cout << CILOK << endl;

    return 0;
}
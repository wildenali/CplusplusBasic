#include <iostream>

#define CILOK

/*
#ifdef

dibaca jika ada definisi nya
*/

#ifdef CILOK                            // jika definisi CILOK ada
    #define TEST_CILOK "Cilok ada nih"
#else                                   // jika tidak ada definisi CILOK
    #define TEST_CILOK "Cilok tidak ada"
#endif

using namespace std;

int main(){
    cout << TEST_CILOK << endl;

    return 0;
}
#include <iostream>

using namespace std;

/*
preprocessor definitions adalah cara kita memberi
nama pada sebuah nilai yang konstan
*/
#define panjang 9
#define lebar 5

int main() {
    int luas;
    luas = panjang * lebar;
    
    cout << luas << endl;

    return 0;
}
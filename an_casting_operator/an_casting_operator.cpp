#include <iostream>

using namespace std;

/*
Untuk mengkonversi suatu data ke tipe data lain.
Contohnya int(2.2000) akan menjadi 2
*/

int main(){
    int a = 5;
    float b = 6.67f;
    char c = 'd';

    cout << a + (int)b << endl;
    cout << (char)(c + a) << endl;

    return 0;
}
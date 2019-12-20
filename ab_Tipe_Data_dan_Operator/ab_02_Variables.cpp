#include <iostream>

using namespace std;

// Deklarasi Variable Extern
extern int a, b;    //  extern ini berfungsi untuk supaya si variabel ini bisa di deklarasi in berkali kali
extern float c;     // biasanya variable global kan cuma bisa dideklarasiin sekali saja

// Global Variable
char g = 'b';
bool h = true;
bool i = false;

int main() {
    // Variable yang ada di C++ adalah
    int a, b;
    float c;
    char d;
    double e;
    wchar_t f;

    long j;

    // inisialisai nya
    a = 23;
    b = 55;
    c = 5.4;
    d = 'a';
    e = 9.44;
    f = 10.2345;
    j = 45l;    // 45 long

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << e << endl;
    cout << f << endl;
    cout << g << endl;
    cout << h << endl;
    cout << i << endl;
    cout << j << endl;

    // Operator
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << (float)a + b << endl;
    cout << a % b << endl;

    a += b;
    b -= c;
    c += e;
    e /= f;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << e << endl;

    return 0;
}
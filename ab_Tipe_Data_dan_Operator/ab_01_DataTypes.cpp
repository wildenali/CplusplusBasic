#include <iostream>
using namespace std;

int main() {
    cout << "Size of boolean                : " << sizeof(bool)                 << " bytes" << "    -> Range :  0 to 1" << endl;
    cout << "Size of char                   : " << sizeof(char)                 << " bytes" << "    -> Range :  0 to 255 or -128 to 127" << endl;
    cout << "Size of signed char            : " << sizeof(signed char)          << " bytes" << "    -> Range : -128 to 127" << endl;;
    cout << "Size of unsigned char          : " << sizeof(unsigned char)        << " bytes" << "    -> Range :  0 to 255" << endl;
    cout << "Size of int                    : " << sizeof(int)                  << " bytes" << "    -> Range : -2.147.483.648 to 2.147.483.647" << endl;
    cout << "Size of unsigned int           : " << sizeof(unsigned int)         << " bytes" << "    -> Range :  0 to 4.294.967.295" << endl;
    cout << "Size of short int              : " << sizeof(short int)            << " bytes" << "    -> Range : -32.768 to 32.767" << endl;
    cout << "Size of unsigned short int     : " << sizeof(unsigned short int)   << " bytes" << "    -> Range :  0 to 65.535" << endl;
    cout << "Size of long int               : " << sizeof(long int)             << " bytes" << "    -> Range : -2.147.483.648 to 2.147.483.647 " << endl;
    cout << "Size of unsigned long int      : " << sizeof(unsigned long int)    << " bytes" << "    -> Range :  0 to 4.294.967.295" << endl;
    cout << "Size of long long int          : " << sizeof(long long int)        << " bytes" << "    -> Range : -(2^63) to (2^63)-1" << endl;
    cout << "Size of unsigned long long int : " << sizeof(short int)            << " bytes" << "    -> Range :  0 to 18.446.744.073.709.551.615 " << endl;
    cout << "Size of float                  : " << sizeof(float)                << " bytes" << endl;
    cout << "Size of double                 : " << sizeof(double)               << " bytes" << endl;
    cout << "Size of long double            : " << sizeof(long double)          << " bytes" << endl;
    cout << "Size of wchar_t                : " << sizeof(wchar_t)              << " bytes" << "    -> Range :  1 wide character " << endl;

    return 0;
}
#include <iostream>
#include <bitset>
#include <string>

using namespace std;

/*
Operator bitwise adalah operator yang digunakan untuk
memanipulasi bit-bit nilai data yang ada di memori.
Operator ini hanya dapat digunakan untuk tipe data:
    char
    int
    long int

Untuk operator bitwise dalam bentuk bit,
dilakukan dalam bit per bit (binary).

bitwise operator
&	AND	Bitwise AND
|	OR	Bitwise inclusive OR
^	XOR	Bitwise exclusive OR
~	NOT	
<<	SHL	Shift bits left
>>	SHR	Shift bits right
*/


void printBinary(unsigned short val, string nama){
    cout << nama << " = " << bitset<8>(val) << endl;
}

int main(){
    unsigned short a = 6;
    unsigned short b = 10;
    unsigned short c;

    cout << "========== Bitwise Shift Bits Left (SHR) ========" << endl;
    c = a >> 1;
    printBinary(a,"a");
    printBinary(c,"c");
    cout << "awalanya a = " << a << endl;
    cout << "digeser 1 menjadi c = " << c << endl << endl;

    cout << "========== Bitwise Shift Bits Right (SHL) ========" << endl;
    c = a << 1;
    printBinary(a,"a");
    printBinary(c,"c");
    cout << "awalanya a = " << a << endl;
    cout << "digeser 1 menjadi c = " << c << endl << endl;

    cout << "========== Bitwise NOT ========" << endl;
    c = ~a;
    printBinary(a,"a");
    printBinary(c,"c");
    cout << "awalanya a = " << a << endl;
    cout << "menjadi c = " << c << endl << endl;

    cout << "========== Bitwise XOR ========" << endl;
    c = a ^ b;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");
    cout << "awalanya a = " << a << endl;
    cout << "awalanya b = " << b << endl;
    cout << "menjadi c = " << c << endl << endl;

    cout << "========== Bitwise OR ========" << endl;
    c = a | b;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");
    cout << "awalanya a = " << a << endl;
    cout << "awalanya b = " << b << endl;
    cout << "menjadi c = " << c << endl << endl;

    cout << "========== Bitwise AND ========" << endl;
    c = a & b;
    printBinary(a,"a");
    printBinary(b,"b");
    printBinary(c,"c");
    cout << "awalanya a = " << a << endl;
    cout << "awalanya b = " << b << endl;
    cout << "menjadi c = " << c << endl << endl;

    return 0;
}
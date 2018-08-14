#include <iostream>
using namespace std;

// ~~~ Arithmatic Operators ~~~
// + - * / % ++ --

// ~~~ Relational Operators ~~~
// == != > < >= <=

// ~~~ Logical Operators ~~~
// && || !

// ~~~ Bitwise Operators ~~~
// & | ^      ,| exclusive OR,^ exclusive OR

// ~~~ Assignment Operators ~~~
// = += -= *= /= %=
// <<=    Left shift AND Assignment Operator
// >>=
// &=   Bitwise AND Assignment Operator
// ^=   Bitwise EXCLUSIVE OR and assignment operator
// |=   Bitwise INCLUSIVE OR and assignment operator

// ~~~ Misc Operators ~~~
// sizeof
// Condition ? X : Y
// ,    coma operator
// . ->
// Cast
// &    Pointer operator
// *    Pointer operator

// ~~~ Operators Precedence ~~~


// https://www.tutorialspoint.com/cplusplus/cpp_operators.htm


int main() {
  // Variable yg ada di C++ adalah
  int a, b;
  float c;
  char d;
  double e;
  wchar_t f;

  // inisialisasi nya
  a = 23;
  b = 55;
  c = 5.4;
  d = 'a';
  e = 9.4;
  f = 10.23;

  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << d << endl;
  cout << e << endl;
  cout << f << endl;

  // Operator Arithmatic
  cout << a + b << endl;
  cout << b - a << endl;
  cout << a * b << endl;
  cout << (float)b / a << endl;
  cout << b % a << endl;
  a += b;
  b -= c;
  c += e;
  e /= f;
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << e << endl;

  // ~~~ Relational Operators ~~~
  // == != > < >= <=
  if(a == b) {
    cout << "a sama dengan b" << endl;
  } else if (a > b) {
    cout << "a > b" << endl;
  } else if (a < b) {
    cout << "a < b" << endl;
  } else if (a > b) {
    cout << "a > b" << endl;
  } else {
    cout << "a tidak sama dengan b" << endl;
  }

  // ~~~ Logical Operators ~~~
  // && || !
  if(a && b) {
    cout << "true" << endl;
  } else if (a || b) {
    cout << "a || b" << endl;
  } else if (!(a && b)) {
    cout << "a ! b" << endl;
  }


  // ~~~ Bitwise Operators ~~~
  // & | ^      ,| exclusive OR,^ exclusive OR
  int aa = 60;      // 60 = 0011 1100
  int bb = 13;      // 13 = 0000 1101
  int cc;

  cc = aa & bb;     // 12 = 0000 1100   // dua dua nya true, maka true
  cout << "aa & bb = " << cc << endl;

  cc = aa | bb;     // 61 = 0011 1101   // salah satu tru, maka true
  cout << "aa | bb = " << cc << endl;

  cc = aa ^ bb;     // 49 = 0011 0001   // yang beda satu sama lain
  cout << "aa ^ bb = " << cc << endl;

  cc = ~aa;         // -61 = 1100 0011  // kebalikan dari nilai tersebut
  cout << "~aa = " << cc << endl;

  cc = aa << 2;     // 240 = 1111 0000  // Geser ke kiri 2 bit
  cout << "aa << 2 = " << cc << endl;

  cc = aa >> 2;     // 15 = 0000 1111   // Geser ke kanan 2 bit
  cout << "aa >> 2 = " << cc << endl;

  // ~~~ Assignment Operators ~~~
  // = += -= *= /= %=
  // Mirip mirip operator artimatika dan bitwise operator cuma cara penulisannya aja yang lebih simple


  // ~~~ Misc Operators ~~~ APA NIH
  // sizeof, return the size of a variable,
  cout << "Size of char : " << sizeof(char) << endl;
  cout << "Size of int : " << sizeof(int) << endl;
  cout << "Size of short int : " << sizeof(short int) << endl;
  cout << "Size of long int : " << sizeof(long int) << endl;
  cout << "Size of float : " << sizeof(float) << endl;
  cout << "Size of double : " << sizeof(double) << endl;
  cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

  // Condition ? X : Y    Kondisi if then, cuma ga usah nulis if then, cukup seperti contoh di bawah ini
  int x, y = 10;
  x = (y < 5) ? 30 : 40;    // Jika y < 5, maka kalau benar akan memunculkan angka 30, kalau salah angka 40
  cout << "value of x: " << x << endl;


  // ,    coma operator
  int i, j;
  j = 10;
  i = (j--, j+1000, 10+j);
  cout << i << endl;    // hasilnya 21, kenapa, ada yang tahu
                        // gini cara bacanya, awalnya si j=10
                        // kemudian j--, jadi berkurang (10-1) kan jadi j=9
                        // kemudia masuk ke condition terakhir yaitu 10+j, jadi hasilnya 10+9 = 19
                        // lah yang TENGAH piye, ga di pedulikan bro, di sekip, mau di ganti2 juda ga ngaruh

  // . ->
  // Cast
  // &    Pointer operator
  // *    Pointer operator

  return 0;
}

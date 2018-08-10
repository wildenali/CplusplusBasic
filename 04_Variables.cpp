#include <iostream>
using namespace std;

// Deklarasi Variabel
extern int a, b;    // Lah ko ada extern nya,
extern float c;     // extern maksudnya, jadi si variable ini bisa di deklarasi in berkali kali, biasanya kan variable cuma bisa di deklarasiin cuma sekali doang, buat yg global

// Global Variable
char g = 'b';
bool h = true;
bool i = false;


int main() {
  // Variable yg ada di C++ adalah
  int a, b;
  float c;
  char d;
  double e;
  wchar_t f;

  long j;

  // inisialisasi nya
  a = 23;
  b = 55;
  c = 5.4;
  d = 'a';
  e = 9.4;
  f = 10.23;
  j = 40l;  // 40 long


  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  cout << d << endl;
  cout << e << endl;
  cout << f << endl;
  cout << g << endl;
  cout << h << endl;
  cout << i << endl;
  cout << j << endl;
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


  return 0;
}

#include <iostream>
 using namespace std;

 /* OPERATORS

    + - * / % ++ --     Aritmatik

    == != > < <= >=     Relational

    && || !             Logic

    & | ^               Bitwise, (| inclusive OR, ^ exclusive OR)

    ``` Assignment Operators ```
        = += -= /= %=
        <<=     Left shift AND Assignment Operator
        >>=
        &=      Bitwise AND Asssignment Operator
        ^=      Bitwise EXCLUSIVE OR and Assignment Operator
        |=      Bitwise INCLUSIVE OR and Assignment Operator
    

    ``` Misc Operators ```
    sozeof
    Condition ? X : Y
    ,       Coma operator
    . ->
    Cast
    &       Pointer operator
    *       Pointer operator

    
    https://www.tutorialspoint.com/cplusplus/cpp_operators.htm

 */

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
  cout << "a: " << a << endl;
  cout << "b: " << b << endl;
  cout << "c: " << c << endl;
  cout << "e: " << e << endl;

  // Relational Operators
  if (a == b) {
      cout << "a sama dengan b" << endl;
  }
  else if (a > b)
  {
      cout << "a > b" << endl;
  }
  else if (a < b)
  {
      cout << "a < b" << endl;
  }
  else
  {
      cout << "a tidak sama dengan b" << endl;
  }
  
  
  
  
  
  

}
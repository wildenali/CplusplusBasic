#include <iostream>
using namespace std;

// Preprocessor definitions adalah cara kita memberi nama pada sebuah nilai yang konstant
#define panjang 4
#define lebar 5


int main() {
  int luas;
  luas = panjang * lebar;

  cout << luas << endl;

  return 0;
}

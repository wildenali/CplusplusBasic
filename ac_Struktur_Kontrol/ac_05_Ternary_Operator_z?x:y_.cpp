#include <iostream>
#include <cstdlib>

int main() {

    int a, b, maksimum;

    std::cout << "Masukan Nilai a: ";
    std::cin >> a;
    std::cout << "Masukan nilai b: ";
    std::cin >> b;

    // cara bacanya
    /*
    jika a > b , maka maksimum = a
    jika a < b , maka maksimum = b
    */

   maksimum = a > b ? a : b;

   std::cout << "Nilai terbesar adalah "
             << maksimum
             << std::endl;
    
    return 0;

}
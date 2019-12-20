#include <iostream>
#include <cstdlib>

int main() {
    double a, b, c;

    std::cout << "Masukan Nilai a: ";
    std::cin >> a;
    std::cout << "Masukan Nilai b: ";
    std::cin >> b;

    
    if (b == 0) {
        std::cout << "Tidak bisa di bagi NOL dong,, nanti hasilnya tak hingga" << std::endl;
        exit(EXIT_FAILURE);
    }
    c = a / b;
    std::cout << a << " di BAGI dengan " << b << " sama dengan "
              << c
              << std::endl;

    return 0;
    
}
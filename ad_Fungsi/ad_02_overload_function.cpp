#include <iostream>

// Nama fungsi sama, tapi parameternya beda beda

// Fungsi PERTAMA
int bagi(int a, int b) {
    return a / b;
}

// Fungsi KEDUA
double bagi(double a, int b) {
    return a / b;
}

// Fungsi KETIGA
double bagi(int a,double b) {
    return a / b;
}

// Fungsi KEEMPAT
double bagi(double a, double b) {
    return a / b;
}

int main() {
    // Memanggil Fungsi PERTAMA
    std::cout << bagi(10, 3) << '\n';

    // Memanggil Fungsi KEDUA
    std::cout << bagi(10.0, 3) << '\n';

    // Memanggil Fungsi KETIGA
    std::cout << bagi(10, 3.0) << '\n';

    // Memanggil Fungsi KEEMPAT
    std::cout << bagi(10.0, 3.0) << '\n';

    return 0;
}
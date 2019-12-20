#include <iostream>
#include <cstdio>

double kali(double a, double b) {
    return a * b;
}

void tulis(std::string s) {
    std::cout << s << '\n';
}

int main() {
    double num1, num2, hasil;

    std::cout << "Masukan nomor Pertama: ";
    std::cin >> num1;
    std::cout << "Masukan nomor Kedua: ";
    std::cin >> num2;

    // Memanggil fungsi kali()
    hasil = kali(num1, num2);

    char cstr[50];
    sprintf(cstr, " %.2f x %.2f = %.2f", num1, num2, hasil);

    std::string cppstr(cstr);

    // Memanggil fungsi tulis()
    tulis(cppstr);

    return 0;
}
#include <iostream>
#include <cstdlib>

int main() {
    std::cout << "===== FOR to DO =====" << '\n';
    for(int a = 0; a < 10; a++)
    {
        std::cout << a << '\n';
    }
    std::cout << '\n';

    std::cout << "===== WHILE DO =====" << '\n';
    int b = 5;
    while(b <= 15){
        std::cout << b << '\n';
        b++;
    }
    std::cout << '\n';
    
}
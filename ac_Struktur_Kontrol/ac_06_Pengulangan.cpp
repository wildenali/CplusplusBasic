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
    while(b < 15){
        std::cout << b << '\n';
        b++;
    }
    std::cout << '\n';

    std::cout << "===== DO WHILE =====" << '\n';
    int c = 5;
    do
    {
        std::cout << c << '\n';
        c++;
    } while (c < 15);
    std::cout << '\n';

    std::cout << "===== FOR BREAK =====" << '\n';
    for(int d = 5; d <= 15; d++)
    {
        std::cout << d << '\n';
        if (d == 35) {
            break;
        }
    }
    std::cout << '\n';

    std::cout << "===== FOR CONTINUE =====" << '\n';
    for(int e = 40; e < 50; e++)
    {
        if (e % 2 == 1) {   // ketika didapati bilangan ganjil, maka dilewati
            continue;
        }
        if (e == 42) {  // ketika ketemu angka 42, di lewati
            continue;
        }   
        std::cout << e << '\n';
    }
    std::cout << '\n';



    return 0;
    
}
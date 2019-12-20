#include <iostream>
#include <cstdlib>

int main() {

    char nohari;
    std::string hari;
    
    std::cout << "Masukan no hari: ";
    std::cin >> nohari;

    switch (nohari)
    {
        case 'a': hari = "Minggu";
            break;
        case 'b': hari = "Senin";
            break;
        case 'c': hari = "Selasa";
            break;
        case 'd': hari = "Rabu";
            break;
        case 'e': hari = "Kamis";
            break;
        case 'f': hari = "Jumat";
            break;
        case 'g': hari = "Sabtu";
            break;
        default:
            std::cout << "Tidak ada Hari ke -"
                      << nohari
                      << "- adanya cuma a sampai g"
                      << std::endl;
        exit(EXIT_FAILURE);
    }

    std::cout << "Hari ke-" << nohari
              << " adalah " << hari
              << std::endl;


    return 0;
}
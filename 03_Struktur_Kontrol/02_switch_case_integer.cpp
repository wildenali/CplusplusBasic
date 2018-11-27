#include <iostream>
#include <cstdlib>

int main() {

  int nohari;
  std::string hari;

  std::cout << "Masukan no hari: ";
  std::cin >> nohari;

  switch (nohari) {
    case 1: hari = "Minggu";
      break;
    case 2: hari = "Senin";
      break;
    case 3: hari = "Selasa";
      break;
    case 4: hari = "Rabu";
      break;
    case 5: hari = "Kamis";
      break;
    case 6: hari = "Jumat";
      break;
    case 7: hari = "Sabtu";
      break;
    default:
      std::cout << "Ga ada Hari ke -"
                << nohari
                << "- adanya cuma 1 sampai 7"
                << std::endl;
      exit(EXIT_FAILURE);
  }

  std::cout << "Hari ke-" << nohari
            << " adalah " << hari
            << std::endl;

  return 0;
}

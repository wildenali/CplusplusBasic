#include <iostream>
#include <cstdlib>

// Hasilnya bakal error
// karena switch hanya boleh bilangan bulat, karakter, logika, atau enumerasi
// sedangkan STRING -> TIDAK BISAA

int main() {

  std::string hari;
  std::string masukanhari;

  std::cout << "Masukan hari (huruf kecil semua): ";
  std::cin >> masukanhari;

  switch (masukanhari) {
    case "senin": hari = "MINGGU";
      break;
    case "selasa": hari = "SENIN";
      break;
    case "rabu": hari = "SELASA";
      break;
    case "kamis": hari = "RABU";
      break;
    case "jumat": hari = "KAMIS";
      break;
    case "sabtu": hari = "JUMAT";
      break;
    case "minggu": hari = "SABTU";
      break;
    default:
      std::cout << "Ga ada Nama Hari -"
                << masukanhari
                << "- itu"
                << std::endl;
      exit(EXIT_FAILURE);
  }

  std::cout << "Kamu memilih hari"
            << hari
            << std::endl;

  return 0;
}

#include <iostream>

void print(std::string s, bool garisbaru = true) {
  std::cout << s;
  if (garisbaru) std::cout << std::endl;
}

int main() {

  // Memanggil fungsi dengan satu argumen
  print("Cek cok");

  // Memanggil fungsi dengan dua argumen
  print("AA", false);
  print("BB", false);
  print("CC", true);
  print("DD", false);
  print("EE", false);

  return 0;
}

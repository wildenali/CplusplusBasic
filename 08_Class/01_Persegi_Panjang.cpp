#include <iostream>

class PersegiPanjang {    // nama class
private:
  double panjang;
  double lebar;
  double hitungLuas();
  double hitungKeliling();

public:
  PersegiPanjang (double p, double l);   // ini namanya konstruktor, namanya harus sama kaya nama class
  void setPanjang(double p);
  double getPanjang();
  void setLebar(double l);
  double getLebar();
  void cetakLuas();
  void cetakKeliling();
};

PersegiPanjang::PersegiPanjang(double p, double l) {
  panjang = p;
  lebar = l;
}

void PersegiPanjang::setPanjang(double p) {
  panjang= p;
}

double PersegiPanjang::getPanjang() {
  return panjang;
}

void PersegiPanjang::setLebar(double l) {
  lebar = 1;
}

double PersegiPanjang::getLebar() {
  return lebar;
}

void PersegiPanjang::cetakLuas() {
  std::cout << "Luas persegi panjang = "
            << hitungLuas()
            << std::endl;
}

void PersegiPanjang::cetakKeliling() {
  std::cout << "Keliling persegi panjang = "
            << hitungKeliling()
            << std::endl
            << std::endl;
}

double PersegiPanjang::hitungLuas() {
  return panjang *  lebar;
}

double PersegiPanjang::hitungKeliling() {
  return 2 * (panjang + lebar);
}


int main() {
  // membuat objek PERTAMA dari kelas PersegiPanjang
  PersegiPanjang *obj1 = new PersegiPanjang(10, 8);

  // membuat objek ke DUA dari kelas PersegiPanjang
  PersegiPanjang *obj2 = new PersegiPanjang(5, 2);

  // MEMANGGIL fungsi dari objek PERTAMA
  std::cout << "Objek PERTAMA" << '\n';
  obj1->cetakLuas();
  obj1->cetakKeliling();

  // MEMANGGIL fungsi dari objek KEDUA
  std::cout << "Objek KEDUA" << '\n';
  obj2->cetakLuas();
  obj2->cetakKeliling();


  // MENGHAPUS daftar objek
  delete obj1;
  delete obj2;




  return 0;
}

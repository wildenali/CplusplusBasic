#include <iostream>

// kelas induk
class SegiEmpat {
private:
  double panjang;
  double lebar;
  double hitungLuas();

public:
  SegiEmpat(double p, double l);
  void setPanjang(double p);
  double getPanjang();
  void setLebar(double l);
  double getLebar();
  void cetakLuas();
};

// Kelas Turunan
class BujurSangkar: public SegiEmpat {
public:
  BujurSangkar (double sisi);
};

SegiEmpat::SegiEmpat(double p, double l) {
  panjang = p;
  lebar = l;
}

void SegiEmpat::setPanjang(double p) {
  panjang = p;
}

double SegiEmpat::getPanjang() {
  return panjang;
}

void SegiEmpat::setLebar(double l) {
  lebar = l;
}

double SegiEmpat::getLebar() {
  return lebar;
}

void SegiEmpat::cetakLuas() {
  std::cout << "Luas = "
            << hitungLuas()
            << std::endl;
}

double SegiEmpat::hitungLuas() {
  return panjang * lebar;
}

BujurSangkar::BujurSangkar(double sisi):
SegiEmpat(sisi, sisi) {}

int main() {
  // membuat objek dari kelas BujurSangkar
  BujurSangkar *obj1 = new BujurSangkar(5.2);

  // memanggil fungsi cetakLuas()
  obj1->cetakLuas();

  // menghapus objek
  delete obj1;

  return 0;
}

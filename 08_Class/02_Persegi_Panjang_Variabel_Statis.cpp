#include <iostream>

class PersegiPanjang {
private:
  double panjang;
  double lebar;
  double hitungLuas();
  double hitungKeliling();

public:
  // membuat variable statis
  static int counter;

  PersegiPanjang (double p, double l);
  ~PersegiPanjang ();
  void setPanjang(double p);
  double getPanjang();
  void setLebar(double l);
  double getLebar();
  void cetakLuas();
  void cetakKeliling();
};

// Mengisi nilai awal untuk variable static
int PersegiPanjang::counter = 0;

PersegiPanjang::PersegiPanjang(double p, double l) {
  // menaikkan nilai variable static
  counter++;

  panjang = p;
  lebar = l;
}

PersegiPanjang::~PersegiPanjang() {
  // menurungkan nilai variable static
  counter--;
}

void PersegiPanjang::setPanjang(double p) {
  panjang = p;
}

double PersegiPanjang::getPanjang() {
  return panjang;
}

void PersegiPanjang::setLebar(double l) {
  lebar = l;
}

double PersegiPanjang::getLebar() {
  return lebar;
}

void PersegiPanjang::cetakLuas() {
  std::cout << "Luas Persegi Panjang = "
            << hitungLuas()
            << std::endl;
}

void PersegiPanjang::cetakKeliling() {
  std::cout << "Keliling Persegi Panjang = "
            << hitungKeliling()
            << std::endl
            << std::endl;
}

double PersegiPanjang::hitungLuas() {
  return panjang * lebar;
}

double PersegiPanjang::hitungKeliling() {
  return 2 * (panjang + lebar);
}


int main() {
  // membuat OBJEK PERTAMA dari kelas PersegiPanjang
  PersegiPanjang *obj1 = new PersegiPanjang(10, 4);

  std::cout << "Nilai counter: "
            << PersegiPanjang::counter
            << std::endl;

  // membuat OBJEK KEDUA dari kelas PersegiPanjang
  PersegiPanjang *obj2 = new PersegiPanjang(20, 2);

  std::cout << "Nilai counter: "
            << PersegiPanjang::counter
            << std::endl;

  // MENGHAPUS daftar objek
  delete obj1;
  delete obj2;

  std::cout << "Nilai counter: "
            << PersegiPanjang::counter
            << std::endl;


  return 0;
}

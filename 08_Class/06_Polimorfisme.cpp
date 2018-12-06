#include <iostream>

// kelas abstrak
class DuaDimensi {
public:
  virtual ~DuaDimensi() {}
  virtual double luas() = 0;  // fungsi virtual murni
};

class Segiempat: public DuaDimensi {
private:
  double panjang;
  double lebar;

public:
  Segiempat(double p,double l);
  virtual ~Segiempat();
  void setPanjang(double p);
  double getPanjang();
  void setLebar(double l);
  double getLebar();
  double luas();  // override DuaDimensi::luas()
};

class Segitiga: public DuaDimensi {
private:
  double alas;
  double tinggi;

public:
  Segitiga(double a, double t);
  virtual ~Segitiga();
  void setAlas(double a);
  double getAlas();
  void setTinggi(double t);
  double getTinggi();
  double luas();    // override DuaDimensi::luas()
};

class Lingkaran: public DuaDimensi {
private:
  static const float PI = 3.14;
  double radius;

public:
  Lingkaran(double r);
  virtual ~Lingkaran();
  void setRadius(double r);
  double getRadius();
  double luas();    // override DuaDimensi::luas()
};

// Segiempat
Segiempat::Segiempat(double p, double l) {
  panjang = p;
  lebar = l;
}
Segiempat::~Segiempat() {}

void Segiempat::setPanjang(double p) {
  panjang = p;
}

double Segiempat::getPanjang() {
  return panjang;
}

void Segiempat::setLebar(double l) {
  lebar = l;
}

double Segiempat::getLebar() {
  return lebar;
}

double Segiempat::luas() {
  return panjang * lebar;
}


// ============ Segitiga ============
Segitiga::Segitiga(double a, double t) {
  alas = a;
  tinggi = t;
}

Segitiga::~Segitiga() {}

void Segitiga::setAlas(double a) {
  alas = a;
}

double Segitiga::getAlas() {
  return alas;
}

void Segitiga::setTinggi(double t) {
  tinggi = t;
}

double Segitiga::getTinggi() {
  return tinggi;
}

double Segitiga::luas() {
  return (alas * tinggi) / 2;
}


// ============ Lingkaran ============
Lingkaran::Lingkaran(double r) {
  radius = r;
}

Lingkaran::~Lingkaran() {}

void Lingkaran::setRadius(double r) {
  radius = r;
}

double Lingkaran::getRadius() {
  return radius;
}

double Lingkaran::luas() {
  return PI * radius * radius;
}

int main() {
  // Pointer ke tipe DuaDimensi
  DuaDimensi *obj;

  // Membuat objek dari kelas Segiempat
  obj = new Segiempat(10, 2);
  std::cout << "Luas segiempat: "
            << obj->luas()
            << std::endl;

  // Membuat objek dari kelas Segitiga
  obj = new Segitiga(3, 5);
  std::cout << "Luas Segitiga = "
            << obj->luas()
            << std::endl;

  // Membuat objek dari kelas Lingkaran
  obj = new Lingkaran(4);
  std::cout << "Luas Lingkaran "
            << obj->luas()
            << std::endl;


  // Menghapus objek
  delete obj;


  return 0;
}

// Coba analisis program 05_Virtual_Murni_dan_Kelas_Abstrak.cpp dengan program 06_Polimorfisme
// nah ketahuan pasti apa bedanya

#include <iostream>

// Member Function adalah fungsi yang ada di dalam kelas (Class)

// Deklarasi kelas
class myPoint{
public:
  myPoint(double x=0, double y=0);
  void move(double x, double y);
  void print();

private:
  double x;
  double y;
};

// implementasi fungsi
myPoint::myPoint(double x, double y) {
  this->x = x;
  this->y = y;
}

void myPoint::move(double x, double y) {
  this->x = x;
  this->y = y;
}

void myPoint::print() {
  std::cout << this->x
            << ","
            << this->y;
  std::cout << std::endl;
}


int main() {

  // Membuat objek dari kelas myPoint
  myPoint p;

  // Memanggil fungsi print()
  p.print();

  // Memanggil fungsi move()
  p.move(4.0, 5.0);

  // Memanggil fungsi print() setelah dipindah
  p.print();

  return 0;
}

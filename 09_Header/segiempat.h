#ifndef SEGIEMPAT_H
#define SEGIEMPAT_H

class Segiempat {
private:
  double panjang;
  double lebar;

public:
  Segiempat (double p, double l);
  void setPanjang(double p);
  double getPanjang();
  void setLebar(double l);
  double getLebar();
  double luas();

};

#endif    // SEGIEMPAT_H

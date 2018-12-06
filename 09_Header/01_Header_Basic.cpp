#include "segiempat.h"
#include <iostream>

Segiempat::Segiempat(double p, double l) {
  panjang = p;
  lebar = l;
}

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

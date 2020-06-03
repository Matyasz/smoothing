#include "splines.h"

#include <armadillo>
#include <iostream>

Splines::Splines(int deg, int len) {
  degree = deg;
  length = len;
}

const void Splines::deBoor() {}

Splines::~Splines() { std::cout << "bye."; }
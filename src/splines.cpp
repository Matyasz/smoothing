#include <armadillo>
#include <iostream>

#include "splines.h"

BSplines::BSplines(int deg, int len) {
  std::cout << "hi.";

  degree = deg;
  length = len;
}

const void BSplines::deBoor() {}

BSplines::~BSplines() { std::cout << "bye."; }
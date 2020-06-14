#pragma once

#include <armadillo>

class BSplines {
public:
  BSplines(int degree, int length);
  ~BSplines();

  int degree;
  int length;
  arma::mat splines;

private:
  void const deBoor();
};

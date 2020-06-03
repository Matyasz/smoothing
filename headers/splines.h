#ifndef SPLINES_H
#define SPLINES_H

#include <armadillo>

class Splines {
public:
  Splines(int degree, int length);
  ~Splines();

  int degree;
  int length;
  arma::mat splineMat;

private:
  void const deBoor();
};

#endif
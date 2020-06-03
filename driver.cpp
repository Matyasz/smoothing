#include <iostream>
//#include<mlpack/core.hpp>
#include <armadillo>
#include <string>

using namespace std;

int main() {
  string data_source = "data.csv";
  arma::mat data;

  if (data.load(data_source)) {
    cout << data_source << " successfully loaded!" << endl;
    cout << data_source << ":" << endl << data << endl;
  } else {
    cout << "data.csv failed to load!" << endl << endl;
  }

  return 0;
}

#ifndef NFIB_H
#define NFIB_H
#include <iostream>
class Matrix {
private:
  long long m[2][2];

public:
  Matrix();
  friend Matrix operator*(Matrix a, Matrix b);
  Matrix binpow(Matrix a, long long n);
  long long getFib();
};
#endif

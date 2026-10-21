#include "nFib.h"

Matrix::Matrix() {
  m[0][0] = 1;
  m[0][1] = 1;
  m[1][0] = 1;
  m[1][1] = 0;
}

Matrix operator*(Matrix a, Matrix b) {
  Matrix c;
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      c.m[i][j] = 0;
      for (int k = 0; k < 2; k++) {
        c.m[i][j] += a.m[i][k] * b.m[k][j];
        c.m[i][j] %= 1000000007;
      }
    }
  }
  return c;
}
Matrix Matrix::binpow(Matrix a, long long n) {
  if (n == 1)
    return a;
  Matrix tmp = binpow(a, n / 2);
  if (n % 2 == 1)
    return tmp * tmp * a;
  return tmp * tmp;
}
long long Matrix::getFib() { return m[0][1]; }

#include "nFib.h"
#include <iostream>
#include <string>
int main() {
  int n = 0;
  while (true) {
    std::cout << "Nth Fibbonaci number finder\n";
    std::cout << " Input an integer: ";
    std::cin >> n;
    while (n <= 0) {
      std::cout << "Invalid\n Input an integer: ";
      std::cin >> n;
    }
    Matrix a;
    Matrix b = a.binpow(a, n);
    std::cout << "your " << n << "th" << " Fibbonaci number is " << b.getFib()
              << "\n Exit?(Y/n): ";
    std::cin.ignore();
    std::string check = "Y";
    std::getline(std::cin, check);
    if (check == "Y" || check == "y" || check == "") {
      break;
    }
  }
}

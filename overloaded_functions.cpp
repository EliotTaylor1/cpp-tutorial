#include <iostream>

int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}
//functions are the same name but as their perameters are different they are have different 'signatures'
int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  std::cout << "Int: " << myNum1 << "\n";
  std::cout << "Double: " << myNum2;
  return 0;
}
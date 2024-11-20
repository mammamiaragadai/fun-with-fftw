// Hello World! in CPP
#include <iostream>
#include <Eigen/Dense>

int main () {
  Eigen::Matrix2d m;
  m << 1, 2, 3, 4;
  std::cout << "Hello World!" << std::endl;
  std::cout << m << std::endl;
  return 0;
}
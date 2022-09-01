#include <iostream>
#include <math.h>

int main()
{
  // https://cplusplus.com/reference/cmath/
  double weight{7.7};
  std::cout << std::floor(weight) << std::endl;
  std::cout << std::ceil(weight) << std::endl;

  double savings{-5000};
  std::cout << std::abs(weight) << std::endl;
  std::cout << std::abs(savings) << std::endl;

  double exponential = std::exp(10);
  std::cout << exponential << std::endl;

  std::cout << std::pow(3, 4) << std::endl;
  std::cout << std::pow(9, 3) << std::endl;

  std::cout << std::log(54.59) << std::endl;
  std::cout << std::log10(10000) << std::endl;

  return 0;
}
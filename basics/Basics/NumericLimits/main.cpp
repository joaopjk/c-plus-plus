#include <iostream>
#include <limits>

int main()
{
  // https://en.cppreference.com/w/cpp/types/numeric_limits

  std::cout << std::numeric_limits<short>::max() << std::endl;
  std::cout << std::numeric_limits<unsigned short>::max() << std::endl;
  std::cout << std::numeric_limits<int>::max() << std::endl;
  std::cout << std::numeric_limits<unsigned int>::max() << std::endl;
  std::cout << std::numeric_limits<long>::max() << std::endl;
  std::cout << std::numeric_limits<float>::max() << std::endl;
  std::cout << std::numeric_limits<double>::max() << std::endl;
  std::cout << std::numeric_limits<long double>::max() << std::endl;

  std::cout << "-------------------------------------" << std::endl;

  std::cout << std::numeric_limits<short>::min() << std::endl;
  std::cout << std::numeric_limits<unsigned short>::min() << std::endl;
  std::cout << std::numeric_limits<int>::min() << std::endl;
  std::cout << std::numeric_limits<unsigned int>::min() << std::endl;
  std::cout << std::numeric_limits<long>::min() << std::endl;
  std::cout << std::numeric_limits<float>::min() << std::endl;
  std::cout << std::numeric_limits<double>::min() << std::endl;
  std::cout << std::numeric_limits<long double>::min() << std::endl;

  return 0;
}
#include <iostream>

int main()
{
  int value{5};

  value += 5;
  std::cout << value << std::endl;

  value-=5;
  std::cout << value << std::endl;

  value /=1;
  std::cout << value << std::endl;

  value *= 1;
  std::cout << value << std::endl;

  value %= 1;
  std::cout << value << std::endl;

  return 0;
}
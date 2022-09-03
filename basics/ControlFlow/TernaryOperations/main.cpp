#include <iostream>

int main()
{
  int max{};
  int a{35}, b{20};

  std::cout << std::endl;
  std::cout << "using regular if" << std::endl;

  if (a > b)
  {
    max = a;
  }
  else
  {
    max = b;
  }

  std::cout << "max: " << max << std::endl;

  max = 0;
  max = (a > b) ? a : b;

  std::cout << "max: " << max << std::endl;

  // Ternary initialization
  std::cout << std::endl;
  std::cout << "speed" << std::endl;
  bool fast{false};

  int speed{fast ? 300 : 150};

  std::cout << "The speed is: " << speed << std::endl;

  return 0;
}
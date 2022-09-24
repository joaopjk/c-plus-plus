#include <iostream>

int main()
{
  std::cout << "range based for loop without initializer: " << std::endl;

  auto multiplier{4};

  for (int value : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10})
  {
    std::cout << "result: " << (value * multiplier) << std::endl;
  }

  std::cout << "multiplier: " << multiplier << std::endl;

  // Range based for loop with initializer
  for (auto multiplier1{4}; int value : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10})
  {
    // value holds a copy of the current iteration in the whole bag
    std::cout << "result: " << (value * multiplier1) << std::endl;
  }

  return 0;
}
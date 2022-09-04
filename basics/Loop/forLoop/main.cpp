#include <iostream>

int main()
{
  for (unsigned int i{}; i < 10; i++)
  {
    std::cout << "I love C++" << std::endl;
  }

  for (size_t i{0}; i < 10; i++)
  {
    std::cout << "i: " << i << " .Double that and you get " << 2 * i << std::endl;
  }

  for (size_t i{0}; i < 5; i++)
  {
    std::cout << "Single statement in body. Can leave out {} on loop body" << std::endl;
  }

  for (size_t i{0}; i < 10; i++)
  {
    std::cout << "i is usable here, the value is: " << i << std::endl;
  }

  size_t j{};
  for (j; j < 10; j++)
  {
    std::cout << "Using the j variable form main function local scope: " << j << std::endl;
  }
  std::cout << "Loop done, the value of j is: " << j << std::endl;

  const size_t COUNT{10};
  for (size_t j{}; j < COUNT; j++)
  {
    std::cout << "The value of j is: " << j << std::endl;
  }

  size_t k{};
  for (k; k < 10; ++k)
  {
    std::cout << "Using the K variable from main function local scope: " << k << std::endl;
  }
  std::cout << "Loop done, the value of k is: " << k << std::endl;

  for (size_t j{}; j < COUNT; j++)
  {
    std::cout << "The value of j is: " << j << std::endl;
  }

  return 0;
}
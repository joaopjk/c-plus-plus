#include <iostream>

int main()
{
  constexpr bool condition{false};

  if constexpr (condition)
  {
    std::cout << "Condtion is true" << std::endl;
  }
  else
  {
    std::cout << "Condition is not true" << std::endl;
  }

  return 0;
}
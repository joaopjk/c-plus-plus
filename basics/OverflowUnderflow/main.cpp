#include <iostream>

int main()
{
  // Overflow
  unsigned char char_var{55};
  unsigned char val1{130};
  unsigned char val2{131};

  char_var = val1 + val2;

  std::cout << static_cast<int>(char_var) << std::endl;

  // Undeflow
  char_var = val1 - val2;

  std::cout << static_cast<int>(char_var) << std::endl;

  return 0;
}
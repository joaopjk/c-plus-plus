#include <iostream>

int main()
{
  int number = 15; // Decimal
  int number2 = 017; // Octal
  int number3 = 0x0f; // Hexadecimal
  int number4 = 0b00001111; // Binary - C++14

  std::cout << "Hello World" << std::endl;

  std::cout << number << std::endl;
  std::cout << number2 << std::endl;
  std::cout << number3 << std::endl;
  std::cout << number4 << std::endl;

  return 0;
}
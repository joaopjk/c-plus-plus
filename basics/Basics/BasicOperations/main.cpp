#include <iostream>

int main()
{
  int number1{10};
  int number2{1};

  int sum{number1 + number2};
  int other_sum = number1 + number2 + 124;

  std::cout << "The sum is: " << sum << std::endl;
  std::cout << "Other sum is: " << other_sum << std::endl;

  int quotient{number1 / number2};
  int other_quotient{number1 / 2};

  std::cout << "The quotient is: " << quotient << std::endl;
  std::cout << "The other quotient is: " << other_quotient << std::endl;

  std::cout << number1 - number2 << std::endl;
  std::cout << number1 / number2 << std::endl;
  std::cout << number1 * number2 << std::endl;
  std::cout << number1 % number2 << std::endl;

  return 0;
}
#include <iostream>

int addNumbers(int first_param, int second_param)
{
  return first_param + second_param;
}

int versusNumbers(int first_param, int second_parm)
{
  return first_param * second_parm;
}

int main()
{
  int first_number{3};
  int second_number{7};

  std::cout << first_number << std::endl;
  std::cout << second_number << std::endl;

  int sum = first_number + second_number;
  std::cout << "Sum: " << sum << std::endl;
  sum = addNumbers(first_number, second_number);
  sum = addNumbers(1, 443);
  std::cout << "Sum: " << addNumbers(first_number, second_number) << std::endl;
  std::cout << "Versus: " << versusNumbers(first_number, second_number) << std::endl;

  return 0;
}
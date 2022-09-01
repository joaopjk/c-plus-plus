#include <iostream>

int main()
{
  std::cout << "C ==> F" << std::endl;
  int celsius{0};
  std::cin >> celsius;
  float fahrenheit = ((9.0 / 5.0) * celsius + 32);
  std::cout << fahrenheit << std::endl;

  return 0;
}
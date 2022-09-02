#include <iostream>

int main()
{
  int number1{50};
  int number2{60};
  std::cout << std::boolalpha;

  bool result = (number1 < number2);

  if (result == true)
  {
    std::cout << number1 << " is less than " << number2 << std::endl;
  }

  if (!(result == true))
  {
    std::cout << number1 << " is NOT less than " << number2 << std::endl;
  }

  if (result == true)
  {
    std::cout << number1 << " is less than " << number2 << std::endl;
  }
  else
  {
    std::cout << number1 << " is NOT less than " << number2 << std::endl;
  }

  bool red = false;
  bool green{true};
  bool yellow{false};
  bool police_stop{true};

  if (red)
  {
    std::cout << "Stop" << std::endl;
  }
  if (yellow)
  {
    std::cout << "Slow down" << std::endl;
  }
  if (green)
  {
    std::cout << "Go" << std::endl;
  }

  if (green)
  {
    if (police_stop)
    {
      std::cout << "Stop" << std::endl;
    }
    else
    {
      std::cout << "Go" << std::endl;
    }
  }

  if (green && !police_stop)
  {
    std::cout << "Go" << std::endl;
  }
  else
  {
    std::cout << "Stop" << std::endl;
  }

  return 0;
}
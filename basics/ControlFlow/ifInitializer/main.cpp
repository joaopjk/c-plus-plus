#include <iostream>

int main()
{
  int speed{10};
  bool go{true};

  if (go)
  {
    if (speed > 5)
      std::cout << "Slow down!" << std::endl;
    else
      std::cout << "All good!" << std::endl;
  }
  else
  {
    std::cout << "Stop" << std::endl;
  }

  std::cout << "speed : " << speed << std::endl;

  // With if initializer
  if (int high_speed{33}; go)
  {
    if (high_speed > 5)
      std::cout << "Slow down" << std::endl;
    else
      std::cout << "All good!" << std::endl;
  }
  else
  {
    std::cout << "high_speed: " << high_speed << std::endl;
    std::cout << "Stop" << std::endl;
  }

  return 0;
}
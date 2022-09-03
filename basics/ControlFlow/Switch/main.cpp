#include <iostream>

int main()
{
  const int Pen{10};
  const int Marker{20};
  const int Eraser{30};
  const int Rectangle{40};
  const int Circle{50};
  const int Ellipse{60};
  int tool{Pen};

  switch (tool)
  {
  case Pen:
  {
    std::cout << "Active tool is pen" << std::endl;
  }
  break;
  case Marker:
  {
    std::cout << "Active tool is marker" << std::endl;
  }
  case Rectangle:
  {
    std::cout << "Active tool is rectangle" << std::endl;
  }
  case Circle:
  {
    std::cout << "Active tool is circle" << std::endl;
  }
  default:
  {
    std::cout << "Can't match any tool" << std::endl;
  }
  break;
  }

  std::cout << "Moving on" << std::endl;

  return 0;
}
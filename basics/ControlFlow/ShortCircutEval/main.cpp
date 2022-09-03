#include <iostream>
using namespace std;

bool car()
{
  std::cout << "car function running" << std::endl;
  return true;
}

bool house()
{
  std::cout << "house function running" << std::endl;
  return false;
}

bool job()
{
  std::cout << "job function running" << std::endl;
  return true;
}

bool spouse()
{
  std::cout << "spouse function running" << std::endl;
  return true;
}

int main()
{
  bool a{true};
  bool b{true};
  bool c{true};
  bool d{false};

  bool p{false};
  bool q{false};
  bool r{false};
  bool m{true};

  std::cout << std::endl;
  std::cout << "AND short circuit" << std::endl;
  bool result = a && b && c && d;
  std::boolalpha;
  std::cout << result << std::endl;

  std::cout << std::endl;
  std::cout << "OR short circuit" << std::endl;
  result = p || q || r || m;
  std::cout << result << std::endl;

  std::cout << car() << std::endl;
  std::cout << house() << std::endl;
  std::cout << job() << std::endl;
  std::cout << spouse() << std::endl;

  if (car() && house() && job() && spouse())
  {
    std::cout << "I am happy" << std::endl;
  }
  else
  {
    std::cout << "I am sad" << std::endl;
  }

  return 0;
}
#include <iostream>

int main()
{
  double x{12.5};
  double y{34.6};

  int sum = x + y; // Implicit cast

  std::cout << sum << std::endl;

  sum = static_cast<int>(x) + static_cast<int>(y);

  std::cout << sum << std::endl;

  sum = static_cast<int>(x + y);

  std::cout << sum << std::endl;

  double PI{3.1415};
  int int_pi = (int)(PI); // Old style c-cast

  std::cout << int_pi << std::endl;

  return 0;
}
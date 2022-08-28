#include <iostream>

void show_result(int result)
{
  std::cout << "result: " << result << std::endl;
}

int main()
{
  /*
  Precedence: which operations to do first
  Associativity: which direction or which order
  https://en.cppreference.com/w/cpp/language/operator_precedence
  */

  int a{6};
  int b{3};
  int c{8};
  int d{9};
  int e{3};
  int f{2};
  int g{5};

  show_result(a + b * c - d / e - f + g);

  show_result(a / b * c + d - e + f);

  show_result(a + b * c - d / f + g);

  show_result(a + (b * c) - (d / e) - f + g);

  show_result((a + b) + c - d / e - f + g);

  return 0;
}
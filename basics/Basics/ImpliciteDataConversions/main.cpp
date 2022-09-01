#include <iostream>

int main()
{
  /*
  The compiler applies implicit conversions when types are differente in an expression
  Conversions are always done form de smallest to the largest types in thid case int is 
  tranformed to double before the expression is evaluated. Unless we are doing an assigment
  */

  double price{45.623};
  int units{10};
  double total_price = price * units;

  std::cout << total_price << std::endl;
  std::cout << sizeof(total_price) << std::endl;

  return 0;
}
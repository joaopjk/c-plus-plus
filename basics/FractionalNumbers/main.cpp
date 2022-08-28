#include <iostream>
#include <iomanip>

int main()
{
  /*
  TYPE SIZE PRECISION COMMENT
  float 4 7 -
  double 8 25 Recommended default
  long double 12 >double
  */
  float number1{1.123456789f};
  double number2{1.12345678901234567890};
  long double number3{1.12345678901234567890L}; // Need L at the end

  std::cout << "size of float: " << sizeof(float) << std::endl;
  std::cout << "size of double: " << sizeof(double) << std::endl;
  std::cout << "size of long double: " << sizeof(long double) << std::endl;

  std::cout << std::setprecision(20); // Sets the decimal precision to be used to format float values on output operations
  std::cout << number1 << std::endl;
  std::cout << number2 << std::endl;
  std::cout << number3 << std::endl;

  // Problem not caught at compile time (false)
  // float number4{192400023};
  // number4 += 1;
  // std::cout << "number 4 is:" << number4 << std::endl;

  double number5{192400023};
  double number6{1.92400023e8};
  double number7{1.924e8};
  double number8{0.00000003498};
  double number9{3.498e-11};

  std::cout << number5 << std::endl;
  std::cout << number6 << std::endl;
  std::cout << number7 << std::endl;
  std::cout << number8 << std::endl;
  std::cout << number9 << std::endl;

  double number10{5.6};
  double number11{}; // Initialized to 0
  double number12{};

  double result{number11 / number12}; // infinity
  result = number11 / number12;       // nan (both results with a nan)

  std::cout << result << std::endl;

  return 0;
}
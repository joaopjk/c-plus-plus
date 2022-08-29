#include <iostream>
using namespace std;

int main()
{
  int number1{45};
  int number2{60};

  cout << boolalpha;

  cout << (number1 < number2) << endl;
  cout << (number1 <= number2) << endl;
  cout << (number1 >number2) << endl;
  cout << (number1 >= number2) << endl;
  cout << (number1 == number2) << endl;
  cout << (number1 != number2) << endl;

  bool result = (number1 == number2);
  cout << result << endl;

  return 0;
}
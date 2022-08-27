#include <iostream>
using namespace std;

int main()
{
  int num1{200};
  int num2{100};
  int result{0};

  cout << num1 + num2 << endl;
  cout << num1 - num2 << endl;
  cout << num1 * num2 << endl;
  cout << num1 / num2 << endl;
  cout << num1 % num2 << endl;
  result = num1 * 10 + num2;
  cout << result << endl;

  const double usd_per_euro{1.9};

  cout << "Welcome to the EUR to USD converter" << endl;
  cout << "Enter de value in the EUR: ";
  double euros{0.0};
  double dollars{0.0};
  cin >> euros;
  dollars = euros * usd_per_euro;

  cout << euros << " euros is equivalent to " << dollars << " dollars" << endl;

  return 0;
}
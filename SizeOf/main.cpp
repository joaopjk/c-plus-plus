#include <iostream>
using namespace std;

int main()
{
  cout << sizeof(char) << endl;
  cout << sizeof(int) << endl;
  cout << sizeof(float) << endl;
  cout << sizeof(long) << endl;
  cout << sizeof(long long) << endl;
  cout << sizeof(long int) << endl;
  cout << sizeof(short) << endl;
  cout << sizeof(signed int) << endl;
  cout << sizeof(unsigned long) << endl;
  cout << sizeof(unsigned long long) << endl;
  cout << sizeof(double) << endl;

  cout << CHAR_MIN << endl;
  cout << INT_MIN << endl;
  cout << SHRT_MIN << endl;
  cout << LONG_MIN << endl;
  cout << LLONG_MIN << endl;

  cout << CHAR_MAX << endl;
  cout << INT_MAX << endl;
  cout << SHRT_MAX << endl;
  cout << LONG_MAX << endl;
  cout << LLONG_MAX << endl;

  int age{27};
  cout << sizeof(age) << endl;

  return 0;
}
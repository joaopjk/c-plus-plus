#include <iostream>
using namespace std;

int main()
{
  bool a{true}, c{true};
  bool b{false};

  cout << boolalpha;
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;

  cout << endl;

  cout << (a && b) << endl;
  cout << (a && c) << endl;
  cout << (a && b && c) << endl;

  cout << endl;

  cout << (a || b) << endl;
  cout << (a || c) << endl;
  cout << (a || b || c) << endl;

  cout << endl;

  cout << (!a) << endl;
  cout << (!b) << endl;
  cout << (!c) << endl;

  return 0;
}
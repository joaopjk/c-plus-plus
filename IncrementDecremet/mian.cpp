#include <iostream>
using namespace std;

int main()
{
  int counter{10};
  int result{0};

  cout << counter << endl;
  counter = counter + 1;
  cout << counter << endl;
  counter++;
  cout << counter << endl;
  ++counter;
  cout << counter << endl;

  counter = 10;
  result = 0;

  result = ++counter;
  cout << counter << endl;
  cout << result << endl;
  cout << counter + result << endl;
  cout << result << endl;

  result = ++counter + 10;
  cout << result << endl;

  result = counter++ + 20;
  cout << result << endl;

  return 0;
}
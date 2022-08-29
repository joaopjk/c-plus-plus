#include <iostream>
using namespace std;

int main()
{
  int value{5};

  value = value + 1;
  cout << value << endl;

  value = 5;
  value -= 1;
  cout << value << endl;

  value = 5;
  value++;
  cout << value << endl;

  value = 5;
  value--;
  cout << value << endl;

  value = 5;
  --value;
  cout << value << endl;
  cout << value << endl;

  value = 5;
  ++value;
  cout << value << endl;

  cout << "The value is (incrementing): " << value++ << endl;
  cout << "The value is: " << value << endl;

  value = 5;

  cout << "The value is (decrementing): " << value-- << endl;
  cout << "The value is: " << value << endl;

  value = 5;

  ++value;
  cout << "The value is (prefix++): " << value << endl;

  value = 5;
  cout << "The value is (prefix++ in plance): " << ++value << endl;

  value = 5;
  --value;
  cout << "The value is (prefix--): " << value << endl;
  cout << "The value is (prefix-- in place): " << --value << endl;

  return 0;
}
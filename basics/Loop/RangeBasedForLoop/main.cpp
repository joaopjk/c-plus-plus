#include <iostream>
using namespace std;

int main()
{
  for (unsigned int i{}; i < 10; ++i)
  {
    cout << "I love C++" << endl;
  }

  int bag_of_values[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  for (int value : bag_of_values)
  {
    cout << "value: " << value << endl;
  }

  for (int value : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10})
  {
    cout << "value: " << value << endl;
  }

  for (auto value : {1, 2, 3, 4, 5, 6, 7, 8, 9, 10})
  {
    cout << "value: " << value << endl;
  }

  return 0;
}
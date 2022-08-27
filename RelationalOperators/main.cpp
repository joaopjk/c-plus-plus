#include <iostream>
using namespace std;

int main()
{
  int num1{10}, num2{20};
  cout << boolalpha;

  cout << (num1 > num2) << endl;
  cout << (num1 >= num2) << endl;
  cout << (num1 < num2) << endl;
  cout << (num1 <= num2) << endl;
  //cout << (num1 <=> num2) << endl; // c++20

  return 0;
}
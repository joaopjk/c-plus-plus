#include <iostream>
using namespace std;

int main()
{
  int num1{20};
  int num2{2};
  num1 = 100;
  num2 = num1 = 2000;
  
  cout << num1 << endl;
  cout << num2 << endl;

  return 0;
}
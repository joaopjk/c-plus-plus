#include <iostream>
using namespace std;

int main()
{
  short int var1{10};
  short int var2{20};
  char var3{40};
  char var4{50};

  cout << sizeof(var1) << endl;
  cout << sizeof(var2) << endl;
  cout << sizeof(var3) << endl;
  cout << sizeof(var4) << endl;

  // Bad conversion to int
  auto result1 = var1 + var2;
  auto result2 = var3 + var4;

  std::cout << sizeof(result1) << std::endl;
  std::cout << sizeof(result2) << std::endl;

  return 0;
}
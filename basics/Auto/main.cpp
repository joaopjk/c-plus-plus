#include <iostream>
using namespace std;

int main()
{
  /*
    Let de compile deduce the type
  */
  auto var1{12};
  auto var2{13.0};
  auto var3{14.0f};
  auto var4{15.0l};
  auto var5{'e'};

  // int modifier suffixes
  auto var6{123u};  // unsigned
  auto var7{13ul};  // unsigned long
  auto var8{123ll}; // long long

  std::cout << "Var1 ocupies: " << sizeof(var1) << std::endl;
  std::cout << "Var2 ocupies: " << sizeof(var2) << std::endl;
  std::cout << "Var3 ocupies: " << sizeof(var3) << std::endl;
  std::cout << "Var4 ocupies: " << sizeof(var4) << std::endl;
  std::cout << "Var5 ocupies: " << sizeof(var5) << std::endl;
  std::cout << "Var6 ocupies: " << sizeof(var6) << std::endl;
  std::cout << "Var7 ocupies: " << sizeof(var7) << std::endl;
  std::cout << "Var8 ocupies: " << sizeof(var8) << std::endl;

  // Careful about auto assigments
  auto var9{333u};                                 // unsigned type (only positive numbers)
  var9 = -22;                                      // assign negative number. DANGER
  std::cout << "Var9 values" << var9 << std::endl; // trash memory

  return 0;
}
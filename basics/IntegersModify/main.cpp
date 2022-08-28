#include <iostream>
using namespace std;

int main()
{
  short short_var{7};
  short int short_int{455};
  signed short signed_short{122};
  signed short int signed_short_int{-456};

  int int_var{55};
  signed signed_var{66};
  signed int signed_int{77};
  unsigned int unsigned_int{77};

  long long_var{88};
  long int long_int{44};
  signed long signed_long{44};
  signed long int signed_long_int{44};
  unsigned long int unsigned_long_int{44};

  long long long_long{888};
  long long int long_long_int{999};
  signed long long signed_long_long{444};
  signed long long int signed_long_long_int{1234};
  unsigned long long int unsigned_long_long_int{1234};

  signed int value1{10};
  signed int value2{-300};

  std::cout << "value1: " << value1 << std::endl;
  std::cout << "value2: " << value2 << std::endl;
  std::cout << "sizeof(value1)" << sizeof(value1) << std::endl;
  std::cout << "sizeof(value2)" << sizeof(value2) << std::endl;

  unsigned int value3{3}; // Only put positive numbers
  // unsigned int value4{-5}; compile erro

  return 0;
}
#include <iostream>

int main()
{
  // Literal type: u and l combinations for unsigned and long
  unsigned char unsigned_char{53u};

  // 2 bytes
  short short_var{-32768};                 // No special literal type for short
  short int short_int{455};                // No special literal type for short
  signed short signed_short{122};          // No special literal type for short
  signed short int signed_short_int{-456}; // No special literal type for short
  unsigned short int unsigned_short_int{5678u};

  // 4 bytes
  const int int_var{55};
  signed sigend_var{66};
  signed int signed_int{77};
  unsigned int unsigned_int{555U};

  // 4 or 8 bytes
  long long_var{88L};
  long int long_int{33L};
  signed long signed_long{44l};
  signed long int signed_long_int{44l};
  unsigned long int unsigned_long_int{555ul};

  long long long_long{888ll};
  long long int long_long_int{999ll};
  signed long long signed_long_long{444ll};
  signed long long int signed_long_long_int{1234ll};

  unsigned int prize{1'500'00'0u}; // c++14 and onwards
  std::cout << "The prize is: " << prize << std::endl;

  // Possible narrowing errors are cought by the braced initializer method. Assigment and functional don't catch that
  // unsigned char distance{555u};
  // unsigned int game_score{-20};

  // With numbers systems - Hex: prefix with 0x;
  unsigned int hex_number{0x22BU};
  int hex_number2{0x400};
  std::cout << hex_number << std::endl;
  std::cout << hex_number2 << std::endl;

  int black_color{0xffffff};
  std::cout << black_color << std::endl;

  // Octal literals: prefix with 0
  int octal_number{0777u};
  std::cout << octal_number << std::endl;
  int error_octal{055};
  std::cout << error_octal << std::endl;

  // Binary literals
  unsigned int binary_literal{0b11111111u}; // 255dec
  std::cout << binary_literal << std::endl;

  // Other literals. This is just an example and we will learn more about strings as we progress in the cours
  char char_literal{'c'};
  int number_literal{15};
  float fractional_literal{1.5f};
  std::string string_literal{"Hit the road"};
  
  std::cout << char_literal << std::endl;
  std::cout << number_literal << std::endl;
  std::cout << fractional_literal << std::endl;
  std::cout << string_literal << std::endl;

  return 0;
}
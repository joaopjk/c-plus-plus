#include <iostream>
#include <bitset>
#include <iomanip>

int main()
{

  const int COLUMN_WIDTH{20};
  unsigned char sandbox_var{0b00110100};

  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;

  sandbox_var <<= 2;
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;

  sandbox_var &= 0b00001100;
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;

  sandbox_var ^= 0b00001100;
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;

  sandbox_var |= 0b00001100;
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(sandbox_var) << std::endl;

  return 0;
}
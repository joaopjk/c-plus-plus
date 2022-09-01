#include <iostream>
#include <iomanip>
#include <bitset>

int main()
{
  const int COLUMN_WIDTH{20};

  unsigned char value1{0x3};
  unsigned char value2{0x5};

  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1) << std::endl;
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(value2) << std::endl;

  std::cout << std::endl;
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1 & value2) << std::endl;
  // std::cout << std::setw(COLUMN_WIDTH) << (value1 & value2) << std::endl;

  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1 | value2) << std::endl;

  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(~value1) << std::endl;
  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(~value2) << std::endl;

  std::cout << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1 ^ value2) << std::endl;

  return 0;
}
#include <iostream>
#include <bitset>

int main()
{
  unsigned short int value{0xff0u};

  std::cout << std::bitset<16>(value) << value << std::endl;

  std::cout << std::endl;
  std::cout << "Shifting right" << std::endl;

  // shift right 1 bit position
  value = static_cast<unsigned short int>(value >> 1);
  std::cout << std::bitset<16>(value) << " " << value << "[After shift 1 bit position right]"
            << std::endl;

  value = static_cast<unsigned short int>(value << 1);
  std::cout << std::bitset<16>(value) << " " << value << "[After shift 1 bit position left]"
            << std::endl;

  /*
  Shifting right divides by 2^n
  Shifting left multiplies by 2^n
  This rule breaks if you throw off 1's either to the right or the left
  */

  std::cout << (value >> 1) << std::endl;

  return 0;
}
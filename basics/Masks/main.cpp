#include <iostream>
#include <bitset>

int main()
{
  /*
  Highlight position bit of interest with a 1
  Mask other positions with 0
  */

  const unsigned char mask_bit_0{0b00000001};
  const unsigned char mask_bit_1{0b00000010};
  const unsigned char mask_bit_2{0b00000100};
  const unsigned char mask_bit_3{0b00001000};
  const unsigned char mask_bit_4{0b00010000};
  const unsigned char mask_bit_5{0b00100000};
  const unsigned char mask_bit_6{0b01000000};
  const unsigned char mask_bit_7{0b10000000};

  std::cout << std::bitset<8>(mask_bit_0) << std::endl;
  std::cout << std::bitset<8>(mask_bit_1) << std::endl;
  std::cout << std::bitset<8>(mask_bit_2) << std::endl;
  std::cout << std::bitset<8>(mask_bit_3) << std::endl;
  std::cout << std::bitset<8>(mask_bit_4) << std::endl;
  std::cout << std::bitset<8>(mask_bit_5) << std::endl;
  std::cout << std::bitset<8>(mask_bit_6) << std::endl;
  std::cout << std::bitset<8>(mask_bit_7) << std::endl;

  unsigned char var{0b00000000};

  var |= mask_bit_0;
  std::cout << std::bitset<8>(var) << std::endl;

  var |= mask_bit_5;
  std::cout << std::bitset<8>(var) << std::endl;

  var &= (~mask_bit_0);
  std::cout << std::bitset<8>(mask_bit_0) << std::endl;

  var &= (~mask_bit_5);
  std::cout << std::bitset<8>(mask_bit_0) << std::endl;

  // Set all bits
  var &= ~(mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
  std::cout << std::bitset<8>(mask_bit_0) << std::endl;

  var &= ~(mask_bit_0 | mask_bit_2 | mask_bit_4 | mask_bit_6);
  std::cout << std::bitset<8>(mask_bit_0) << std::endl;

  return 0;
}
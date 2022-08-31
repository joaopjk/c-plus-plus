#include <iostream>
#include <bitset>

int main()
{
  unsigned short int data{0b111111110};

  std::cout << std::dec << data << std::endl;
  std::cout << std::hex << data << std::endl;
  std::cout << std::bitset<16>(data) << std::endl;

  return 0;
}
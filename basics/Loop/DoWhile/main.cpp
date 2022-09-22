#include <iostream>

int main()
{
  const unsigned int COUNT{10};
  unsigned int i{11};

  do
  {
    std::cout << i << std::endl;
    i++;
  } while (i < count);

  return 0;
}
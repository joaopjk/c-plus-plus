#include <iostream>
using namespace std;

int main()
{
  const size_t COUNT{20};

  for (size_t i{0}; i < COUNT; ++i)
  {
    if (i == 11)
      continue; // break;

    cout << "i: " << i << endl;
  }

  return 0;
}
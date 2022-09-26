#include <iostream>
using namespace std;

int main()
{
  int packages[4][3];
  cout << "Size of packages: " << sizeof(packages) << endl;
  cout << "Elements cout in packages: " << size(packages) << endl;

  cout << endl;
  for (size_t i{0}; i < 4; i++)
  {
    for (size_t j{0}; j < 3; j++)
    {
      cout << packages[i][j] << "||";
    }

    cout << endl;
  }

  cout << endl;
  for (size_t linha{0}; size(packages); linha++)
  {
    for (size_t coluna{0}; size(packages[linha]); coluna++)
    {
      cout << packages[linha][coluna];
    }
    cout << endl;
  }

  return 0;
}
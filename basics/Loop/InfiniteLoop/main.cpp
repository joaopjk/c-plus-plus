#include <iostream>
using namespace std;

int main()
{
  for (size_t i{};; ++i)
  {
    cout << "Just looping around" << endl;
  }

  while (true)
  {
    cout << "Just looping around" << endl;
  }

  do
  {
    cout << "Just looping around" << endl;
  } while (true);
  
  return 0;
}
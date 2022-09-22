#include <iostream>
using namespace std;

int main()
{
  // for (size_t i{};; ++i)
  // {
  //   cout << "Just looping around" << endl;
  // }

  // while (true)
  // {
  //   cout << "Just looping around" << endl;
  // }

  // do
  // {
  //   cout << "Just looping around" << endl;
  // } while (true);

  char operation;
  double operand1;
  double operand2;
  bool end{false};

  cout << "Welcome to Awesome Calculator" << endl;

  while ((end == false))
  {
    cout << "Continue ?(Y | N )";
    char go_on;
    cin >> go_on;

    if ((go_on == 'Y' || go_on == 'y'))
    {
      end = false;
    }
    else
    {
      end = true;
    }
  }

  return 0;
}
#include <iostream>
using namespace std;

int main()
{
  int item_count{0};

  if (item_count)
  {
    cout << "We have items in the bag. " << item_count << " to be exact" << endl;
  }
  else
  {
    cout << "Sorry! You have no item in the bag" << endl;
  }
}
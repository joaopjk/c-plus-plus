#include <iostream>
using namespace std;

int main()
{
  int elephant_count;
  int lion_count{};  // Initializes to zero
  int dog_count{15}; // Initializes to 10
  int domesticated_animals{lion_count + dog_count};
  // int narrowing_conversion{2.9}; // Error
  int narrowing_conversin(2.9); // Silent, but bad information
  cout << "size of int: " << sizeof(int) << " bytes" << endl;
  narrowing_conversin = 2.9;
  cout << narrowing_conversin << endl;

  return 0;
}
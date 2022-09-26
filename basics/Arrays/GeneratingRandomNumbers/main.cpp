#include <iostream>
using namespace std;

int main()
{
  int random_num = rand(); // generates a number between 0 and RAND_MAX
  cout << "number: " << random_num << endl;

  random_num = rand();

  cout << "RAND_MAX: " << RAND_MAX << endl;

  // Range [0-10]: what you % with controls the upper bound
  random_num = rand() % 11; // Will be between [0-10];

  for (size_t i{}; i < 30; i++)
  {
    random_num = rand() % 11;
    cout << "Number: " << random_num << endl;
  }

  // Range [1-15]
  random_num = (rand() % 15) + 1;

  for (size_t i{}; i < 30; i++)
  {
    random_num = (rand() % 15) + 1;
    cout << "number: " << random_num << endl;
  }

  // Seed
  time(0);
  srand(time(0));

  for (size_t i{}; i < 30; i++)
  {
    random_num = (rand() % 15) + 1;
    cout << "number: " << random_num << endl;
  }

  return 0;
}
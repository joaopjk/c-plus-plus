#include <iostream>

int main()
{
  int scores[10];

  std::cout << std::endl;
  std::cout << "Reading out score values (manually): " << std::endl;
  std::cout << "scores[0]: " << scores[0] << std::endl;
  std::cout << "scores[1]: " << scores[1] << std::endl;
  std::cout << "scores[9]: " << scores[9] << std::endl;

  for (size_t i{0}; i < 10; i++)
  {
    std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
  }

  for (size_t i{0}; i < 10; i++)
  {
    scores[i] = i * 3;
  }

  for (size_t i{0}; i < 10; i++)
  {
    std::cout << "scores[" << i << "]: " << scores[i] << std::endl;
  }

  // Declare and initialize at the same time
  std::cout << std::endl;
  std::cout << "Declare and initialize at the same time: " << std::endl;

  double salaries[5]{12.7, 7.5, 13.2, 8.1, 9.3};

  for (size_t i{0}; i < 5; i++)
  {
    std::cout << "salary[" << i << "]: " << salaries[i] << std::endl;
  }

  // If you don't initialize all the elements, those you leave out are initialized to 0
  std::cout << std::endl;
  std::cout << "Leaving out some elements un-initialized: " << std::endl;

  int families[5]{12, 7, 5};

  for (size_t i{0}; i < 5; i++)
  {
    std::cout << "families[" << i << "]: " << families[i] << std::endl;
  }

  // Sum up scores array, store result in sum
  int sum{0};

  for (int element : scores)
  {
    sum += element;
  }
  std::cout << "Score sum: " << sum << std::endl;

  return 0;
}
#include <iostream>
#include <iomanip>

int main()
{
  const size_t ROWS{12};
  const size_t COLS{3};

  for (size_t row{0}; row < ROWS; row++)
  {
    for (size_t col{0}; col < COLS; ++col)
    {
      std::cout << "( row " << std::setw(2) << row << ",col " << std::setw(2) << col << ")";
      ++col;
    }
    std::cout << std::endl;
  }

  size_t row{0};
  size_t col{0};

  while (row < ROWS)
  {
    while (col < COLS)
    {
      std::cout << "( row " << std::setw(2) << row << ",col " << std::setw(2) << col << ")";
      ++col;
    }
    std::cout << std::endl;
    col = 0;

    ++row;
  }

  row = 0;
  col = 0;

  do
  {
    do
    {
      std::cout << "( row " << std::setw(2) << row << ",col " << std::setw(2) << col << ")";
      ++col;
    } while (col < COLS);

    std::cout << std::endl;
    col = 0;

    ++row;
  } while (row < ROWS);

  return 0;
}
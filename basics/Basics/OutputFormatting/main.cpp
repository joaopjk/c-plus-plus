#include <iostream>
#include <ios>
#include <iomanip>

void show_date_row(std::string lastname, std::string firstname, int age)
{
  std::cout << std::setw(10) << lastname << std::setw(10) << firstname << std::setw(5) << age << std::endl;
}

int main()
{
  std::cout << "Hello";
  std::cout << "World";
  std::cout << std::endl;

  std::cout << "--------------" << std::endl;

  std::cout << "Hello" << std::endl;
  std::cout << "World" << std::endl;

  std::cout << std::endl;

  std::cout << "Hello\n";
  std::cout << "World\n";

  // std::flush Causes immediate sending of data to the device connected to stream
  std::cout << "Unformatted table: " << std::endl;
  std::cout << "Daniel"
            << " "
            << "Gray"
            << " "
            << "25" << std::endl;

  std::cout << std::endl;

  std::cout << "Formatted table: " << std::endl;

  std::cout << std::setw(10) << "Lastname" << std::setw(10) << "Firstname" << std::setw(5) << "Age" << std::endl;
  show_date_row("Daniel", "Gray", 25);
  show_date_row("Stanley", "Gliu", 65);
  show_date_row("Jordan", "Gray", 75);
  show_date_row("Mike", "Paulo", 21);
  show_date_row("Josh", "Mike", 25);
  show_date_row("Izaias", "Aabhraa", 25);

  std::cout << "----------------------------------------" << std::endl;

  int col_width = 20;
  std::cout << std::right;
  std::cout << std::setw(col_width) << "Lastname" << std::endl;
  std::cout << std::setw(col_width) << "Daniel" << std::endl;
  std::cout << std::setw(col_width) << "Mike" << std::endl;
  std::cout << std::setw(col_width) << "Pedro" << std::endl;
  std::cout << std::setw(col_width) << "Camila" << std::endl;

  std::cout << "----------------------------------------" << std::endl;
  std::cout << "Internal justified: " << std::endl;
  std::cout << std::right;
  std::cout << std::setw(10) << -123.4 << std::endl;
  std::cout << std::internal;
  std::cout << std::setw(10) << -123.4 << std::endl;

  int pos_int{717171};
  int neg_int{-43475};
  double double_var{498.35};

  std::cout << std::endl;
  std::cout << "pos_int in differente bases: " << std::endl;
  std::cout << std::dec << pos_int << std::endl;
  std::cout << std::hex << pos_int << std::endl;
  std::cout << std::oct << pos_int << std::endl;

  std::cout << "neg_int in different bases: " << std::endl;
  std::cout << std::dec << neg_int << std::endl;
  std::cout << std::hex << neg_int << std::endl;
  std::cout << std::oct << neg_int << std::endl;

  std::cout << "double_var in different bases: " << std::endl;
  std::cout << std::dec << double_var << std::endl;
  std::cout << std::hex << double_var << std::endl;
  std::cout << std::oct << double_var << std::endl;

  // showbase and noshowbase: show the base for integral types
  std::cout << "pos_int (noshowbase : default): " << std::endl;
  std::cout << std::dec << pos_int << std::endl;
  std::cout << std::hex << pos_int << std::endl;
  std::cout << std::oct << pos_int << std::endl;

  std::cout << "pos_int (noshowbase : default): " << std::endl;
  std::cout << std::showbase;
  std::cout << std::dec << pos_int << std::endl;
  std::cout << std::hex << pos_int << std::endl;
  std::cout << std::oct << pos_int << std::endl;

  std::cout << "pos_int (lowercase : default): " << std::endl;
  std::cout << std::dec << pos_int << std::endl;
  std::cout << std::hex << pos_int << std::endl;
  std::cout << std::oct << pos_int << std::endl;

  std::cout << "pos_int (uppercase): " << std::endl;
  std::cout << std::uppercase;
  std::cout << std::dec << pos_int << std::endl;
  std::cout << std::hex << pos_int << std::endl;
  std::cout << std::oct << pos_int << std::endl;

  double a{3.1415965894556456133133};
  double b{2006.0};
  double c{1.34e-10};

  std::cout << std::endl;
  std::cout << "double values (defaul): " << std::endl;
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << c << std::endl;

  std::cout << std::endl;
  std::cout << "double values (fixed): " << std::endl;
  std::cout << std::fixed;
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << c << std::endl;

  std::cout << std::endl;
  std::cout << "double values (scientific): " << std::endl;
  std::cout << std::scientific;
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << c << std::endl;

  std::cout << std::endl;
  std::cout << "double values (back to defaults): " << std::endl;
  std::cout.unsetf(std::ios::scientific | std::ios::fixed);
  std::cout << a << std::endl;
  std::cout << b << std::endl;
  std::cout << c << std::endl;

  std::cout << std::endl;
  std::cout << a << std::endl; // default precision (6)
  std::cout << std::setprecision(10);
  std::cout << a << std::endl;
  std::cout << std::setprecision(20);
  std::cout << a << std::endl;
  std::cout << std::setprecision(50);
  std::cout << a << std::endl;
  std::cout << std::setprecision(6) << std::endl;

  std::cout << std::dec;
  double d{34.1};
  double e{101.99};
  double f{12.0};
  int g{45};

  std::cout << "nonshowpoint (defaul): " << std::endl;
  std::cout << d << std::endl;
  std::cout << e << std::endl;
  std::cout << f << std::endl;
  std::cout << g << std::endl;

  std::cout << std::endl;

  std::cout << "showpoint: " << std::endl;
  std::cout << std::showpoint;
  std::cout << d << std::endl;
  std::cout << e << std::endl;
  std::cout << f << std::endl;
  std::cout << g << std::endl;

  return 0;
}
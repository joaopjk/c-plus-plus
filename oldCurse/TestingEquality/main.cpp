#include <iostream>
using namespace std;

int main()
{
  bool equal_result{false};
  bool not_equal_result{false};
  int num1{}, num2{};
  cout << boolalpha; // Will display true/false instead if 1/0

  cout << "Enter two intengers separated by space: ";
  cin >> num1 >> num2;
  equal_result = (num1 == num2);
  not_equal_result = (num1 != num2);

  cout << "Comparision result (equals): " << equal_result << endl;
  cout << "Comparision result (not equals): " << not_equal_result << endl;

  char char1{}, char2{};
  cout << "Enter two characters separated by a space: ";
  cin >> char1 >> char2;
  equal_result = (char1 == char2);
  not_equal_result = (char2 != char1);
  cout << "Comparision result (equals): " << equal_result << endl;
  cout << "Comparision result (not equals): " << not_equal_result << endl;

  double double1{}, double2{};
  cout << "Enter two doubles separated by space: ";
  cin >> double1, double2;
  equal_result = (double1 == double2);
  not_equal_result = (double1 != double2);
  cout << "Comparision result (equals): " << equal_result << endl;
  cout << "Comparision result (not equals): " << not_equal_result << endl;

  cout << "Enter an integer and double separated by spaces: ";
  cin >> num1, double1;
  equal_result = (num1 == double1);
  not_equal_result = (num1 != double1);
  cout << "Comparision result (equals): " << equal_result << endl;
  cout << "Comparision result (not equals): " << not_equal_result << endl;

  return 0;
}
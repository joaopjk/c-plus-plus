#include <iostream>
#include <string>

int main()
{
  std::cout << "Hello World" << std::endl;
  std::cerr << "std::cerr output: Someting went wrong" << std::endl;
  std::clog << "std::clog output: This is a log message" << std::endl;

  int age;
  std::string name;
  std::cout << "Please type in your last name: " << std::endl;
  std::cin >> name;
  std::cout << "Please type in your age:" << std::endl;
  std::cin >> age;
  std::cout << "Hello " << name << "! You are " << age << " years old" << std::endl;

  std::string full_name;

  std::cout << "Please type in your full name:" << std::endl;
  std::getline(std::cin, full_name);
  std::cout << "Hello mother fucker! " << full_name << std::endl;

  std::cout << "Please type your name and age separeted by space: " << std::endl;
  std::cin >> name, age;
  std::cout << "Hello " << name << "! You are " << age << " years old" << std::endl;

  return 0;
}
#include <iostream>

const int val1{33};
constexpr int val2{34};
int val3{35};

constinit int age = 88;
const constinit int age1{val1};
constinit int age2{age1};
const constinit double weight{33.33};

int main()
{
  /*
  constinit says that a variable should be initialize at compile time. It's a new keyword
  If you try to initialize with something that can't be evaluated at compile time, you'll get a compiler error
  We say that the variable should be const initialized
  constinit can only be applied to variables with static or thread storage duration. This, is part means variables outside
  the scope of the main function. We'll understand more about this later in the course when we have powerful tools is our hands
  constinit is in place in part to help in avoiding problems with the order of initialization of global variables outside the main function
  constinit variables must be initalized with const or literals
  Const and constinit can be combine, but const and constexpr can't be combine in an expression
  CAREFUL HERE: constinit doesn't imply that the variable is const. It just implies that the compiler enforces intiliazation at compile time.
  */

  return 0;
}
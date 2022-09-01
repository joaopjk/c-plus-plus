#include <iostream>

int static_var{80}; // static duration: dies when program ends

void some_function()
{
  int local_var{30};          // local (automatic) duration: dies at end of block
  static int static_var1{40}; // static duration: dies when program ends
  int dynamic_var1{50};       // You decide it dies
}

int main(int argc, char **argv)
{
  int local_var1{10};   // local (automatic) duration: dies at end block
  int dinamic_var2{60}; // you decide when it dies
  {
    int local_var2{10};   // local (automatic) duration: dies at end block
    int dinamic_var3{60}; // you decide when it dies
  }
  return 0;
}
#include <iostream>
using namespace std;

int main()
{
  char message[5]{'H', 'e', 'l', 'l', 'o'};

  cout << "message: ";
  for (auto c : message)
  {
    cout << c;
  }
  cout << endl;
  cout << "size: " << size(message) << endl;

  cout << endl;
  message[0] = 'h';
  cout << "message: ";
  for (auto c : message)
  {
    cout << c;
  }

  cout << endl;
  cout << size(message) << endl;
  cout << message << endl;

  // Auto filled in null characters
  char message2[5]{'H', 'e', 'l', 'l', 'o'};
  cout << "message2: " << message2 << endl;
  cout << "size: " << size(message2) << endl;

  // Literal C-strings
  cout << endl;
  char message3[]{"Hello"};

  cout << "message3: " << message3 << endl;
  cout << "size: " << size(message3) << endl;

  cout << endl;
  char message4[]{"Hello World!"};

  cout << "message4: " << message4 << endl;
  cout << "size: " << size(message4) << endl;

  cout << endl;
  int numbers[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  cout << "numbers: " << numbers << endl;

  // Can also define a literal C string
  cout << endl;
  char message5[]{"Hello"};

  cout << "message5: " << message5 << endl;
  cout << "size: " << size(message5) << endl;

  // Can even have spaces between characters
  cout << endl;
  char message6[]{"Hello World!"};

  cout << "message6: " << message6 << endl;
  cout << "size: " << size(message6) << endl;

  // Can't direct print arrays other than that of chars

  return 0;
}
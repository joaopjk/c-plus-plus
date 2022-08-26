#include <iostream>
using namespace std;

int main()
{
  int test_scores[5]{100, 95, 98, 87, 88};

  cout << test_scores[0] << endl;
  cout << test_scores[1] << endl;
  cout << test_scores[2] << endl;
  cout << test_scores[3] << endl;
  cout << test_scores[4] << endl;

  // int test_scores2[5];

  // cin >> test_scores2[0];
  // cin >> test_scores2[1];
  // cin >> test_scores2[2];
  // cin >> test_scores2[3];
  // cin >> test_scores2[4];

  // cout << test_scores2[0] << endl;
  // cout << test_scores2[1] << endl;
  // cout << test_scores2[2] << endl;
  // cout << test_scores2[3] << endl;
  // cout << test_scores2[4] << endl;

  char vowels[]{'a', 'e', 'i', 'o', 'u'};
  cout << "\nThe first vowel is: " << vowels[0] << endl;
  cout << "The last vowel is: " << vowels[4] << endl;
  cout << sizeof(vowels) << endl;

  double hi_temps[]{90.1, 89.8, 77.5, 81.6};
  cout << "\nThe first high temperature is: " << hi_temps[0] << endl;
  hi_temps[0] = 107.7;
  cout << "\nThe first high temperature is: " << hi_temps[0] << endl;

  cout << test_scores << endl;

  return 0;
}
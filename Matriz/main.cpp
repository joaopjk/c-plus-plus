#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<char> vowels{'a', 'e', 'i', 'o', 'u'};
  cout << vowels[0] << endl;
  cout << vowels[4] << endl;

  vector<int> test_scores{100, 98, 89};
  cout << "\nTest scores using array syntax:" << endl;
  cout << test_scores[0] << endl;
  cout << test_scores[1] << endl;
  cout << test_scores[2] << endl;

  cout << "\nTest score using vector syntax: " << endl;
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;
  cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;

  cout << "\nUpdate test scores" << endl;
  cin >> test_scores.at(0);
  cin >> test_scores.at(1);
  cin >> test_scores.at(2);
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;

  cout << "\nEnter a test to add the vector: ";
  int scores_to_add{0};
  cin >> scores_to_add;
  test_scores.push_back(scores_to_add);
  cout << "\nEnter a test to add the vector: ";
  cin >> scores_to_add;
  test_scores.push_back(scores_to_add);

  cout << "\nTest scores are now: " << endl;
  cout << test_scores.at(0) << endl;
  cout << test_scores.at(1) << endl;
  cout << test_scores.at(2) << endl;
  cout << test_scores.at(3) << endl;
  cout << test_scores.at(4) << endl;
  cout << "\nSize of the vector test " << test_scores.size() << endl;

  vector<vector<int>> movie_ratings{
      {1, 2, 3, 4},
      {1, 2, 3, 4},
      {1, 2, 3, 4}};

  cout << "\nHere are the movie rating for reviwer #1 using array syntax: " << endl;
  cout << movie_ratings[0][0] << endl;
  cout << movie_ratings[0][1] << endl;
  cout << movie_ratings[0][2] << endl;
  cout << movie_ratings[0][3] << endl;

  cout << "\nHere are the movie rating for reviwer #1 using vector syntax: " << endl;
  cout << movie_ratings.at(1).at(0) << endl;
  cout << movie_ratings.at(1).at(1) << endl;
  cout << movie_ratings.at(1).at(2) << endl;
  cout << movie_ratings.at(1).at(3) << endl;

  return 0;
}
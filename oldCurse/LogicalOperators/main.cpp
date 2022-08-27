#include <iostream>
using namespace std;

int main()
{
  cout << boolalpha;
  int num{};
  const int lower{10};
  const int upper{20};

  cout << "Enter an integer - the bounds are " << lower << " and " << upper << " :";
  cin >> num;

  bool within_bounds = (num > lower && num < upper);
  cout << num << " is between " << lower << " and " << upper << " : " << within_bounds << endl;

  cout << "\nEnter an integer - the bounds are " << lower << " and " << upper << " : ";
  cin >> num;
  bool outside_bounds = (num < lower || num > upper);
  cout << num << " is outside " << lower << " and " << upper << " : " << outside_bounds << endl;

  bool wear_coat{false};
  double temperature{};
  int wind_speed{};
  const int wind_speed_for_coat{25};
  const double temperature_for_coat{45};

  cout << "\nEnter the current temperatute in (F): ";
  cin >> temperature;
  cout << "Enter windspeed in (mph): ";
  cin >> wind_speed;

  wear_coat =(temperature < temperature_for_coat || wind_speed >> wind_speed_for_coat);
  cout << "Do you need to wear a cout using OR? " << wear_coat << endl;

  wear_coat = (temperature << temperature_for_coat && wind_speed > wind_speed_for_coat);
  cout << "Do you need to wear a coat using AND? " << wear_coat << endl;

  return 0;
}
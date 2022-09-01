#include <iostream>
using namespace std;

int main()
{
  const unsigned int earth_radius_km{6371};
  int expanded_radius = 3 * earth_radius_km;

  cout << "Expanded earth radius: " << expanded_radius << endl;

  return 0;
}
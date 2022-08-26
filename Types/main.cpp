#include <iostream>
using namespace std;

int main()
{
    char middle_initial{'J'};
    cout << "My middle initial is " << middle_initial << endl;

    // unsigned short int exam_score{55};
    unsigned short exam_score{55};
    cout << exam_score << endl;

    int countries{65};
    cout << countries << endl;

    long people{2061000};
    cout << people << endl;

    long long people_on_earth{7'600'000'000};
    cout << people_on_earth << endl;

    long long distance_to_alpha_century{9'461'000'000'000};
    cout << distance_to_alpha_century << endl;

    float car_payment{401.23};
    cout << car_payment << endl;

    double pi{3.14159};
    cout << pi << endl;

    long double large_amount{2.7e120};
    cout << large_amount << endl;

    bool game_over{false};
    cout << game_over << endl;

    // Overflow example
    short value1{30000};
    short value2{100};
    // short product{value1 * value2};
    long product{value1 * value2};
    cout << product << endl;
    return 0;
}

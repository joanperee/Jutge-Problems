#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double x;
    while (cin >> x)
    {
        cout << fixed << setprecision(6) << sin(x*(M_PI/180.000000)) << " " << cos(x*(M_PI/180.000000)) << endl;
    }
}
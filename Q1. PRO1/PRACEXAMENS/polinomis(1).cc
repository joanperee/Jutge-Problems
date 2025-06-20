#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x;
    cin >> x;
    int exp;
    exp = 0;
    double coef, result;
    result = 0;
    while (cin >> coef)
    {
        result += coef * pow(x, exp);
        ++exp;
    }
    cout << fixed << setprecision(4) << result << endl;
}
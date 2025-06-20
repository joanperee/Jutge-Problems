#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int counter = 0;
    string forma;
    double x, y, r;
    double pi = M_PI;
    while (counter != n)
    {
        cin >> forma;
        if (forma == "rectangle")
        {
        cin >> x >> y;
        cout << fixed << setprecision(6) << x*y << endl; 
        ++counter;
        }
        else
        {
        cin >> r;
        cout << fixed << setprecision(6) << (pi * r * r) << endl;
        ++counter;
        }
    }
} 
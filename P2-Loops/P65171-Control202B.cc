#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    cout.setf(ios::fixed);
    cout.precision(2);

    int n;
    cin >> n;
    double s = 0, p = 0;
    for (int i = 0; i < n; ++i)
    {
        double m;
        cin >> m;
        s += m*m;
        p += m;
    }
    cout << ((1.0/(n-1))*abs(s)) - ((1.0/(n*(n-1)))*abs(p*p)) << endl;
}
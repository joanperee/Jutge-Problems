#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double n;
    while (cin >> n)
    {
        cout << "divisors de " << n << ": ";
        //Bucle divisors petits
        for (int i = 0; i < n; ++i)
        {
            if (n%i == 0) cout << i << endl;
        }
        cout << endl;
        //Bucle divisors grans
        
    }
}
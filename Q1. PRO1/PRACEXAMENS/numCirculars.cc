#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, counter;
    counter = 0;
    while ((n != -1) and (cin >> n))
    {
        int numxifres, aux, primeraXifra;
        aux = n;
        numxifres = 0;
        
        while (aux > 0)
        {
            aux /= 10;
            ++numxifres;
        }
        primeraXifra = (n/(pow(10, (numxifres - 1))));

        if (primeraXifra == n%10)
        {
            cout << n << endl;
            ++counter;
        }
    }
    cout << "total: " << counter << endl;
}
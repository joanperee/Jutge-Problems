#include <iostream>
using namespace std;

int main()
{
    int numbase, n;
    while (cin >> numbase >> n)
    {
        int numxifres = 0, aux = n;
        while (aux > 0)
        {
            aux /= numbase;
            ++numxifres;
        }
        cout << numxifres << endl;
    }
}
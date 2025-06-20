#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int numbase = 2; numbase <= 16; ++numbase)
    {
        cout << "Base " << numbase << ": ";
        int numxifres = 0;
        int aux = n;
        while (aux > 0)
        {
            aux /= numbase;
            ++numxifres;
        }
        cout << numxifres << " cifras." << endl;
    }
}
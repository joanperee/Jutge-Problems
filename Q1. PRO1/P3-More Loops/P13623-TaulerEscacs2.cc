#include <iostream>
using namespace std;

int main()
{
    int f, c;
    cin >> f >> c;

    char n;
    int sumpar, sumimp;
    sumpar = 0;
    sumimp = 0;
    for (int i = 0; i < f; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cin >> n;
            if (i%2 == 0 and j%2 == 0) sumpar += int(n - '0');
            else if (i%2 != 0 and j%2 != 0) sumimp += int(n - '0');
        }
    }
    cout << sumpar + sumimp << endl;
}
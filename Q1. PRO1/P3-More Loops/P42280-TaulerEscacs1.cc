#include <iostream>
using namespace std;

int main ()
{
    int f, c;
    cin >> f >> c;
    char n;
    int sum = 0;
    for (int i = 0; i < f; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cin >> n;
            sum += int(n - '0');
        }
    }
    cout << sum << endl;
}
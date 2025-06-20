#include <iostream>
using namespace std;

int main()
{
    int n = 0, position = 0, p;
    cin >> p;
    while ((n != -1) and (position != p) and (cin >> n))
    {
        ++position;
    }
    cout << "A la posicio " << position << " hi ha un " << n << "." << endl;
}
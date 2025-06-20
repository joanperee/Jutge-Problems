#include <iostream>
using namespace std;

int main()
{
    int any;
    cin >> any;
    if (any >= 1800 and any <= 9999)
    {
        if (any%100 == 0)
        {
            if (any%400 == 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else if (any%4 == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
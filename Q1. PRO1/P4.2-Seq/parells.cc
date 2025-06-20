#include <iostream>
using namespace std;

int main()
{
    int m;
    if (cin >> m)
    {
        int countm = 0;
        while (countm < m)
        {
            int n, n2;
            cin >> n;
            int parell = 0;
            while (n > 0)
            {
                cin >> n2;
                if (n < n2) ++parell;
                n = n2;
            }
            cout << parell << endl;
            ++countm;
        }
    }
}
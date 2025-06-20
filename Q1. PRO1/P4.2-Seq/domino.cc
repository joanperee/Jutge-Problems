#include <iostream>
using namespace std;

int main()
{
    int primer, a, b;
    cin >> primer;
    int errors = 0;
    if (cin >> a)
    {
        while (cin >> a >> b)
        {
            if (a != b) ++errors;
        }
    }
    else cout << "Correcte. 0 errors" << endl;
}
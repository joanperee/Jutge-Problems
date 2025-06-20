#include <iostream>
using namespace std;

int main()
{
    int base;
    cin >> base;
    int n;
    while (cin >> n)
    {
        int s = 0, aux = n;
        while (n > 0)
        {
            s += n%base;
            n = n/base;
        }
        cout << aux << ": " << s << endl; 
    }
}
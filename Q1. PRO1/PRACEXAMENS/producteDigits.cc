#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int prod = 0;
        while (n != 0)
        {    
            n %= 10;
            n /= 10;
        }
        cout << prod << endl;
    }
}
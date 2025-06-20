#include <iostream>
using namespace std;

void suma1(int &n)
{
    while (n > 0)
    {
        if ((n%10)%2 == 0) n%10 + 1;
    }
}

int main()
{
    int n;
    while (cin >> n)
    {
        suma1(n);
        cout << n << endl;
    }
}
#include <iostream>
using namespace std;

void dibuixa_barres(int n)
{
    if (n == 1)
    {
        cout << '*' << endl;
        return;
    }
    dibuixa_barres(n - 1);
    dibuixa_barres(n - 1);
    cout << string(n, '*') << endl;
}

int main()
{
    int n;
    while (cin >> n) dibuixa_barres(n);
}
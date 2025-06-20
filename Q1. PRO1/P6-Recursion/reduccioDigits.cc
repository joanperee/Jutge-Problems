#include <iostream>
using namespace std;

int suma_digits(int n) 
{
    if (n < 10) return n;
    else return suma_digits(n/10) + n%10;
}

int reduccio_digits(int n) 
{
    if (n < 10) return n;
    else return reduccio_digits(suma_digits(n));
}

int main() 
{
    int n;
    while (cin >> n) 
    {
        cout << reduccio_digits(n) << endl;
    }
}
#include <iostream>
using namespace std;

void notacio_binaria(int n)
{
    if (n > 1) notacio_binaria(n/2);
    cout << n%2;
}

void notacio_octal(int n)
{
    if (n > 7) notacio_octal(n/8);
    cout << n%8;
}

void notacio_hexadecimal(int n)
{
    char c;
    if (n > 15) notacio_hexadecimal(n/16);
    if (n%16 == 10)
    {
        c = 'A';
        cout << c;
    }
    else if (n%16 == 11)
    {
        c = 'B';
        cout << c;
    }
    else if (n%16 == 12)
    {
        c = 'C';
        cout << c;
    }
    else if (n%16 == 13)
    {
        c = 'D';
        cout << c;
    }
    else if (n%16 == 14)
    {
        c = 'E';
        cout << c;
    }
    else if (n%16 == 15)
    {
        c = 'F';
        cout << c;
    }
    else cout << n%16;
}

int main()
{
    int n;
    while (cin >> n)
    {
        cout << n << " = ";
        notacio_binaria(n); 
        cout << ", "; 
        notacio_octal(n); 
        cout << ", "; 
        notacio_hexadecimal(n); 
        cout << endl;
    }
}
#include <iostream>
#include <cmath>
using namespace std;

char digitCentral(int n)
{
    int count_digits = 0;
    int aux = n;
    while (n != 0)
    {
        n /= 10;
        ++count_digits;
    }
    if (count_digits % 2 != 0)
    {
        aux = (aux / (pow(10, (count_digits / 2))));
        return (aux % 10 + '0');
    }
    else return 'F';
}

int main()
{
    char guanyador = ' ';
    int m;
    cin >> m;
    int count_general = 1;
    int a, b, a2;
    cin >> a;
    while (count_general < 2*m)
    {
        cin >> b >> a2;
        if (digitCentral(a) != 'F' && digitCentral(b) != 'F')
        {
            if (digitCentral(a) != digitCentral(b)) guanyador = 'A'; 
            else if (digitCentral(a) != digitCentral(a2)) guanyador = 'B';
            else guanyador = '=';
            count_general += 2;
        }
        else
        {
            if (digitCentral(a) == 'F') guanyador = 'A';
            else guanyador = 'B';
            count_general += 2;
        }
    }
    cout << guanyador << endl;
}
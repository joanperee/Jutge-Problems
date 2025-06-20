#include <iostream>
using namespace std;


int main () 
{
    int n, suma = 0;
    cin >> n;
    int aux = n;
    while (n > 0) 
    {
        suma += n%10;
        n = n/100;
    }
    if (suma%2 == 0) cout << aux << " ES TXATXI" << endl;
    else cout << aux << " NO ES TXATXI" << endl;
}
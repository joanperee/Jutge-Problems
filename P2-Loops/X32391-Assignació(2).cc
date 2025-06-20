#include <iostream>
using namespace std;

int main()
{
    /*  PRE: Declaració de les variables d'entrada.

        MID: Bucle "for" que permet les assignacions "t", entrada
            d'assignacions, càlcul del saldo actual i condicional "if"
            per sumar +1 al contador si el saldo > 0€.
            
        POST: Ja fora del bucle, es fa output del contador. 
    */
    int d, n, t, counter = 0;
    cin >> d >> n >> t;
    for (int i = 0; i < t; ++i)
    {
        int allowance;
        cin >> allowance; 
        n = n + (allowance - d);
        if (n > 0) ++counter;
    }
    cout << counter << endl;
}
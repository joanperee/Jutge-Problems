#include <iostream>
using namespace std;

    /* PRE: Fem l'input del nombre natural 'x'
       
       MID: 
            (1) Bucle per tenir tants inputs com vulgui l'usuari
            (2) Bucle sempre que x es pugui seguir dividint en nxifres (x > 0)
            (3) Si la xifra (x%10) és parell, llavors s'emmagatzema a 'npar'
            (4) Si la xifra (x%10) és senar, llavors s'emmagatzema a 'nimp'
            (5) Cada variable ('npar' i 'nimp') té un contador ('cpar' i 'cimp') per multiplicar *10
        
        POST: 'y' = suma d'npar i nimp, 'z' = 2y (Faig l'operació al cout estalviant 2 variables)
    */
    
int main()
{
    int x;
    while (cin >> x)
    {
        int cpar = 1;
        int cimp = 1;
        int npar = 0;
        int nimp = 0;
        while (x > 0)
        {
            if (x%2 == 0 and x%10 != 0)
            {
                npar += (x%10*cpar);
                cpar = cpar*10;
            }
            else if (x%2 != 0)
            {
                nimp += (x%10*cimp);
                cimp = cimp*10;
            }
            x = x/10;
        }
        cout << nimp*cpar + npar << " " << 2*(nimp*cpar + npar) << endl;
    }
}
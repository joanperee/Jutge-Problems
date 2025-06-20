#include <iostream>
using namespace std;
    
    /* PRE: (En bucle) Emmagatzemam el 'name' i l'edat 'n' de la frase gràcies a les variables 'b' basura
       
       MID: 
            (1) L'edat que aparenta = edat - edat/10
            (Exemple) Si edat = 87, llavors [EDAT APARENTADA] = 87 - 87/10 = 87 - 8 = [79]
        
        POST: Output de la frase seguint el format corresponent
    */

int main()
{
    string b, name;
    int n;
    while (cin >> b >> b >> b >> name >> b >> b >> b >> n >> b >> b)
    {
        n -= n/10;
        cout << name << ", you look younger. I thought you were " << n << " years old." << endl;
    }
}
#include <iostream>
using namespace std;

    /* PRE: Declarar variables*/

int main ()
{
    //Primer input
    char c1, c2, c3;
    cin >> c1 >> c2;

    bool trobat = false;
   
    int aaa, aab, aba, abb, baa, bab, bba, bbb, countposicio;
    aaa = aab = aba = abb = baa = bab = bba = bbb = countposicio = 0;
    
    //Segon input en bucle fins complir condició
    while ((not trobat) and (cin >> c3))
    {
        //8 posibles combinacions de submots
        aaa += c1 == 'a' and c2 == 'a' and c3 == 'a';
        bbb += c1 == 'b' and c2 == 'b' and c3 == 'b';
        aab += c1 == 'a' and c2 == 'a' and c3 == 'b';
        aba += c1 == 'a' and c2 == 'b' and c3 == 'a';
        abb += c1 == 'a' and c2 == 'b' and c3 == 'b';
        baa += c1 == 'b' and c2 == 'a' and c3 == 'a';
        bab += c1 == 'b' and c2 == 'a' and c3 == 'b';
        bba += c1 == 'b' and c2 == 'b' and c3 == 'a';
        
        //Evitar solapament
        c1 = c2;
        c2 = c3;
        
        //Condició per sortir del bucle
        if (aaa == 2 or aab == 2 or aba == 2 or abb == 2 or baa == 2 or bab == 2 or bba == 2 or bbb == 2)
        {
            trobat = true;
        }
        
        ++countposicio;
        
    }
    //Output corresponent per a cada possible cas
    if (aaa == 2) cout << "aaa";
    else if (aab == 2) cout << "aab";
    else if (aba == 2) cout << "aba";
    else if (abb == 2) cout << "abb";
    else if (baa == 2) cout << "baa";
    else if (bab == 2) cout << "bab";
    else if (bba == 2) cout << "bba";
    else cout << "bbb";
    cout << " " << countposicio - 1  << endl;
}
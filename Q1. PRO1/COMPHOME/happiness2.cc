#include <iostream>
using namespace std;

/*
    PRE: Inicialitzam la invariant (a) i el caràcter evaluat (b), els contadors 
    de caraContenta (i) i caraTrista (j), i els booleans per a cada cas.

    MID: Bucle de seqüència infinita (CTRL + D) on s'evaluen els tres casos 
    i es té en compte el solapament gràcies al joc amb els booleans.

    POST: Output dels contadors ja esmentats.
    
    REQUISITS: No string ni arrays.
*/

int main() 
{
    char a, b;
    a = ' ';
    int i, j;
    i = j = 0;
    bool cas1 = false;
    bool cas2 = false;
    bool cas3 = false;
    while (cin >> b) 
    {
        //Cas 1. ":--)" o bé ":--("
        if (a == ':' and b == '-') cas1 = true;
        if (b == ')' and cas1)
        {
            i++;
            cas1 = false;
        }
        else if (b == '(' and cas1)
        {
            j++;
            cas1 = false;
        }
        else if (b == ':' and cas1) cas1 = false; //No Cas1
        
        //Casos 2. "(--:" i 3. ")--:"
        if (a == '(' and b == '-') cas2 = true;
        else if (a == ')' and b == '-') cas3 = true;
        if (b == ':' and cas2)
        {
            ++i;
            cas2 = false;
        }
        else if (b == ':' and cas3)
        {
            ++j;
            cas3 = false;
        }
        else if (cas2 and (b == '(' or b == ')')) cas2 = false; //No Cas2
        else if (cas3 and (b == '(' or b == ')')) cas3 = false; //No Cas3
        
    a = b;  //Canvi de caràcter evaluat
    }
    cout << i << " " << j << endl; //Output segons format corresponent
}
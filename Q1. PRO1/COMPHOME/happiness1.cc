#include <iostream>
using namespace std;

/* 
       PRE: Llegim primer el caràcter actual i inicialitzam inòcuament els altres dos anteriors
       MID: Usarem: "Treat-all Sliding window strategy" (window = 3)
       POST: Nombre de cares contentes i tristes tenint en compte el solapament
*/
    
int main() 
{
    char a, b;  //Caràcters previs
    char c;     //Carcàcter evaluat actualment
    
    int i, j;   //Contadors cares contentes i tristes, respectivament
    i = 0; j = 0;
    
    char d, g, pd, pe; 
    d = ':'; g = '-'; pd = ')'; pe = '(';
    
    cin >> a >> b; 
    
    while (cin >> c)
    {
        //Finestra de cerca
        if (a == d and b == g and c == pd) ++i;
        else if (a == d and b == g and c == pe) ++j;
        else if (a == pe and b == g and c == d) ++i;
        else if (a == pd and b == g and c == d) ++j;
        
        //Seg. iteració
        a = b;
        b = c;
    }
    //Output desitjat
    cout << i << " " << j << endl;  
}
#include <iostream>
#include <string>
using namespace std;
   
    /* PRE: Declaram variables int (nombres) i string (operadors) juntament amb bucle per l'input
       
       MID: 
            (1) Assignar al resultat 'r' l'operació corresponent amb if's
            (2) Assignar el corresponent comparador 'cp' a la operació amb if's
            (3) Trobar la veracitat de la operació amb un boolean 
        
        POST: Output true/false segons l'emmagatzemat al boole
    */

int main()
{
    int n1, n2, n3, r;
    string op, cp;
    while (cin >> n1 >> op >> n2 >> cp >> n3)
    {
        if (op == "+") r = n1 + n2;
        else if (op == "-") r = n1 - n2;
        else r = n1 * n2;
    
        bool estabe = false;
        if (cp == "<") estabe = (r < n3);
        else if (cp == ">") estabe = (r > n3);
        else if (cp == "<=") estabe = (r <= n3);
        else if (cp == ">=") estabe = (r >= n3);
        else if (cp == "==") estabe = (r == n3);
        else if (cp == "!=") estabe = (r != n3);
        
        if (estabe) cout << "true" << endl;
        else cout << "false" << endl;
    }
}
#include <iostream>
using namespace std;

void llista_paraules_inversa_meitat(int& cont) 
{
    string s;
    if (cin >> s) 
    {
        ++cont;
        llista_paraules_inversa_meitat(cont);
        if (cont <= 0) cout << s << endl;
        cont -= 2;
    }
}
 
int main() 
{
    int cont = 0;
    llista_paraules_inversa_meitat(cont);
}
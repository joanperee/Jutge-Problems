//Posiciones de un maximo en dos secuencias
#include <iostream>
using namespace std;
 
 
void infoSequencia(int& max, int& lpos) 
{
    if (lpos > max) max = lpos;
}
 
int main() 
{
    int n1, lpos, count, pos, max;
    n1 = 666; 
    pos = count = max = 0;
    while (n1 != 0 and cin >> n1) 
    {
        lpos = n1;
        infoSequencia(max, lpos);
        ++count;
        if (max == lpos) pos = count;
    }
    
    cout << max << " " << pos << " ";
    
    int n2, pos2;
    pos2 = 1;
    n2 = 666;
    while (n2 != 0 and cin >> n2 and n2 != max) 
    {
        ++pos2;
    }
    if (n2 == max) cout << pos2 << endl;
    else cout << '-' << endl;
}
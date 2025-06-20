#include <iostream>
using namespace std;

void espais(int espai, int asterisc)
{
    for (int i = 0; i < espai; i++) cout << ' ';
    for (int i = 0; i < asterisc; i++) cout << '*';
    cout << endl;
}

void magnitud_rombes(int n, int m)
{
    int amlpada = (2*n-1); 
    
    //PAS BASE
    if (n == 1) espais((m-amlpada)/2,1);

    //GENERALITZACIO DE TOTS ELS CASOS    
    else
    {
        //Sub-rombes superiors
        magnitud_rombes((n - 1), m);

        //Codi general per formar el rombe (reutilitzat entregues anteriors)
        int q = 1;
        for (int i = 3; i < (amlpada - 1); i = i + 2)
        {
            espais(((m - i)/2), i); 
            ++q;
        }
        
        espais(((m - amlpada)/2), amlpada);  

        int r = 1;
        for (int i = (amlpada - 2); i > 2; i = i - 2)
        {
            espais(((m - i)/2), i); 
            r++;
        }

        //Sub-rombes inferiors
        magnitud_rombes((n - 1), m); 
    }
}

int main()
{
    int n;
    while(cin >> n)
    {
        magnitud_rombes(n, 2*n-1);
        cout << endl;
    }
}
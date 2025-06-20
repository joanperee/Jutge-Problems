#include <iostream>
using namespace std;

int main()
{
    //Declaram variables d'entrada
    int h, m, d;
    if (cin >> h >> m >> d)
    {
        //Passam tot a minuts
        int suma_min = 0;
        suma_min = h*60 + m + d;

        //Passam el nou horari a hores i minuts
        h = (suma_min/60)%24;
        m = suma_min%60;

        //Casos especials/privats
        if (h == 24) cout << "00:";

        //Tornem el format demanat per l'exercici
        if (h < 10 and h != 24) cout << '0' << h << ":";
        else if (h >= 10 and h != 24) cout << h << ":";
        if (m < 10) cout << '0' << m << endl;
        else cout << m << endl;
    }
}
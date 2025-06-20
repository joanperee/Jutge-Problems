#include <iostream>
using namespace std;

int main()
{
    int h0, m0, hf, mf;
    cin >> h0 >> m0 >> hf >> mf;
    int hora, min;
    //Calcul interval de minuts
    if (m0 <= mf) min = mf - m0;
    else 
    {
        min = mf - m0 + 60;
        h0 = (h0 + 1)%24;
    }
    //Calcul interval d'hores
    if (h0 <= hf) hora = hf - h0;
    else 
    {
        hora = hf - h0 + 24;
    }
    //Output amb el format desitjat
    if (hora < 10) cout << '0' << hora << ':';
    else cout << hora << ':';
    if (min < 10) cout << '0' << min << endl;
    else cout << min << endl;
}
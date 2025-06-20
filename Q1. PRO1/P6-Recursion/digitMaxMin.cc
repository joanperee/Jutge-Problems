#include <iostream>
using namespace std;

//PRE: la funcio rep el valor de n
//POST: s'emmagatzemen els digits maxim i minim a les variables corresponents

void digit_maxim_i_minim(int n, int& maxim, int& minim)
{
    //Pas BASE
    if (n < 10) 
    {
        maxim = minim = n;
        return;
    }

    //Pas INDUCTIU
    digit_maxim_i_minim((n/10), maxim, minim);
    int n_ultim = n%10;
    if (maxim < n_ultim) maxim = n_ultim;
    if (minim > n_ultim) minim = n_ultim;
}

int main()
{
    int x;
    while (cin >> x) 
    {
        int a, b;
        digit_maxim_i_minim(x, a, b);
        cout << x << ' ' << a << ' ' << b << endl;
    }
}
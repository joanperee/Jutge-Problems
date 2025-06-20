#include <iostream>
using namespace std;

int invers(int n)
{
    int num = 0;
    while (n > 0)
    {
        num = num*10 + n%10;
        n /= 10;
    }
    return num;
}

int z(int x)
{
    int cont = 0;
    if (x != 0)
    {
        while (x%10 == 0) 
        {
            cont++;
            x /= 10;
        }
    }
    return cont;
}

int engreixa(int x)
{
    int max, zeros, resultat;
    resultat = 0;
    zeros = z(x);
    x = invers(x);
    max = x%10;
    x /= 10;
    resultat = resultat*10 + max;
    while (x > 0)
    {
        int nou_num = x%10;
        if (nou_num < max) nou_num = max;
        else max = nou_num;
        resultat = (resultat*10) + max;
        x /= 10;
    }
    if (zeros != 0) for (int i = 0; i < zeros; ++i) resultat = resultat*10 + max;
    return resultat;
}

int main()
{
    int n;
    while (cin >> n) cout << engreixa(n) << endl;
}
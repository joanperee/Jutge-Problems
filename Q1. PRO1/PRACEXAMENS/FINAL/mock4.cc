#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// Pre: Sigui n el tamany v.size(). Llavors, per a cada i a {0..n-2}, es compleix |v[i]-v[i+1]|<=2.
//      A més, només hi ha un i a {0..n-2} que compleixi |v[i]-v[i+1]|=1.
// Post: La funció retorna el i praticular que compleix |v[i]-v[i+1]|=1.
int positionDistance1(const vector<int> &v)
{
    int n = v.size();
    int inf = 0;
    int sup = (n - 1);
    while ((inf + 1) < sup) {
        int med = (inf + sup)/2;
        if (v[med]%2 == v[inf]%2) inf = med;
        else sup = med;
    }
    return inf;
}

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        cout << positionDistance1(v) << "\n";
    }
}
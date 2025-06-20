#include <iostream>
#include <vector>
#include <ctype.h>
using namespace std;

typedef vector<vector<char> > Matriu;
typedef vector<string> Paraules;

void outputMatriu(Matriu& A, const string& Paraules, int i, int j, int ii, int ij)
{
    for (int k = 0; k < p.size())
}

void resol_sopa_lletres(const Matriu& A, int x)
{
    int m = A.size();
    int n = A[0].size();
    string s;
    for (int k = 0; k < x; ++k) 
    {
        cin >> s;
        int lletres = 0;
        bool solucio = false;
        // Cerca horitzontal
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j) 
            {
                if (s[j] == A[i][j]) ++lletres;
                if (lletres == int(s.size())) solucio = true;
                if (solucio) for (int q = j; q > (int(s.size()) - n); --q) toupper(A[i][q]);
            }
        // Cerca vertical
        

        //Cerca diagonal
    }
    for (int i = 0; i < (m); ++i)
    {
        for (int j = 0; j < (n); ++j) cout << A[i][j] << " ";
        cout << endl;
    }
}

int main()
{
    int x, m, n;
    while (cin >> x >> m >> n)
    {
        Matriu A(m, vector<char>(n, '-'));
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j) cin >> A[i][j];
        resol_sopa_lletres(A, x);
    }
}
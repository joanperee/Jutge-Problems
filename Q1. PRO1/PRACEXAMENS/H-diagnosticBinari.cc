#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

typedef vector<char> Row;
typedef vector<Row> Matrix;

Matrix readMatrix(int n, int m)
{
    Matrix mat(n, vector<char>(m, '0'));
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> mat[i][j];
            mat[i][j] = int(mat[i][j]);
        }
    }
}

Row calcula_gamma(Matrix &mat)
{
    int n = mat.size();
    int m = mat[0].size();
    Row gamma(m);
    for (int j = 0; j < m; ++j)
    {
        int countzeros = 0;
        int countones = 0;
        for (int i = 0; i < n; ++i)
        {
            if (mat[i][j] == 0) ++countzeros;
            else ++countones;
        }
        if (countones > countzeros) gamma[j] = 1;
        else if (countzeros > countones) gamma[j] = 0;
        else gamma[j] = 0;
    }
}

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        Matrix mat = readMatrix(n, m);
        Row gamma = calcula_gamma(mat);
        for(int i = 0; i < m; ++i) cout << gamma[i];
        cout << endl;
    }
}
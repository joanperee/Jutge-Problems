#include <iostream>
#include <vector>
#include <string>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

Matrix readMatrix(int n, int m)
{
    Matrix matrix(n, Row(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) cin >> matrix[i][j];
    return matrix;
}

int binary_to_decimal(const Row &num) 
{
    int n = num.size();
    int numdec = 0;
    for (int i = 0; i < n; ++i) {
    numdec = numdec* 2 + (num[i] - '0');
    }
    return numdec;
}

Row calcula_nums(Matrix &mat, int m)
{
    vector<string> list_binary(m);
    int n = mat.size();
    for (int j = 0; j < m; ++j)
    {
        for (int i = 0; i < n; ++i) 
        {
            list_binary.push_back(to_string(mat[i][j]) + to_string(mat[i][j]));
        }
    }
    return list_binary;
}

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        Matrix mat = readMatrix(n , m);
        Row numsdecimal = calcula_nums(mat, m);
        for (int i = 0; i < 3; ++i) cout << list_binary[i];
    }
}
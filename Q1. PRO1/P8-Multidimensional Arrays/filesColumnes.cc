#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int row, column;
    cin >> row >> column;

    typedef vector<int> Row;
    typedef vector<Row> Matrix;
    Matrix matrix(row, Row(column));
    
    for (int i = 0; i < row; ++i) 
    {
        for (int j = 0; j < column; ++j) cin >> matrix[i][j];
    }
    
    string question;
    int n;
    while (cin >> question >> n)
    {
        if (question == "row") 
        {
            cout << "row " << n << ":";
            for (int j = 0; j < column; ++j) cout << " " << matrix[n - 1][j];
            cout << endl; 
        }
        if (question == "column")
        {
            cout << "column " << n << ":";
            for (int i = 0; i < row; ++i) cout << " " << matrix[i][n - 1];
            cout << endl;
        }
        if (question == "element")
        {
            int m;
            cin >> m;
            cout << "element " << n << " " << m << ": " << matrix[n - 1][m - 1] << endl;
        }
    }
}

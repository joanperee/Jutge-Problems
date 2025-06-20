#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//  P16893. SUDOKU RULES:
//  1. It is forbidden to repeat a number in a same column, row or submatrix 3x3
//  2. Consequently, as the grid is 9x9, all numbers 1-9 must be included

typedef vector<int> Row;
typedef vector<Row> Matrix;

bool sudoku_has_solution(const Matrix& sudoku) 
{
    // Check rows and columns
    for (int i = 0; i < 9; ++i) 
    {
        vector<bool> rowCheck(10, false);
        vector<bool> colCheck(10, false);

        for (int j = 0; j < 9; ++j) 
        {
            // Check rows
            if (rowCheck[sudoku[i][j]]) return false;
            rowCheck[sudoku[i][j]] = true;

            // Check columns
            if (colCheck[sudoku[j][i]]) return false;
            colCheck[sudoku[j][i]] = true;
        }
    }

    // Check submatrices
    for (int i = 0; i < 9; i += 3) 
    {
        for (int j = 0; j < 9; j += 3) 
        {
            vector<bool> submatrixCheck(10, false);

            for (int q = i; q < i + 3; ++q) 
            {
                for (int r = j; r < j + 3; ++r) 
                {
                    if (submatrixCheck[sudoku[q][r]]) return false;
                    submatrixCheck[sudoku[q][r]] = true;
                }
            }
        }
    }
    return true;
}

int main()
{
    int nombre_casos;
    cin >> nombre_casos;
    int n = 9;
    for (int casos = 0; casos < nombre_casos; ++casos)
    {
        Matrix sudoku(n, vector<int>(n, 0));
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j) cin >> sudoku[i][j];
        }
        if (sudoku_has_solution(sudoku)) cout << "si" << endl;
        else cout << "no" << endl; 
    }
}
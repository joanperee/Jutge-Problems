#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu;

// PRE: recieves the magnitude of the matrix
// POST: generates the corresponding field grid
void get_field(Matriu& field, int rows, int columns)
{
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < columns; ++j) cin >> field[rows][columns];
}

// PRE: recieves the magnitude i, j of the field submatrix
// POST: evaluates the magnitude of the growing
void submatrix(Matriu& field, int row, int column)
{
    int m = field.size();
    int n = field[0].size();
    for (int i = 0; i < m; ++i)
    {
        if (field[i][column] != 0) 
        {
            for (int j = column; j < n; ++j) 
            {
                if (field[i][j] != 0) field[i][j] = 0;
                else j = n;
            }
        }
        else i = m;
    }
}

// MAIN: calculates how many growings there are in a given crops field 
int main()
{
    int m, n;
    Matriu field(m, vector<int>(n, 0));
    while (cin >> m >> n)
    {
        get_field(field, m, n);

        int count_growings = 0;
        for (int i = 0; i < m; ++i) 
        {
            for (int j = 0; j < n; ++j) 
            {
                if (field[i][j] != 0) 
                {
                    submatrix(field, i , j);
                    ++count_growings;
                }
            }
        }
        cout << count_growings << endl;
    }
}
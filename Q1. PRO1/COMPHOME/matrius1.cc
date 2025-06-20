#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<char>> Matrix;

int happy_horizontal_faces(const Matrix& grid) 
{
    int n = grid.size();
    int m = grid[0].size();
    int count = 0;
    for (int i = 0; i < n; ++i) 
    {
        for (int j = 0; j < (m - 2); ++j) // Search for :-) and (-: removing overlapping (m - 2)
        {
            if (grid[i][j] == ':' and grid[i][j + 1] == '-' and grid[i][j + 2] == ')') ++count;
            else if (grid[i][j] == '(' and grid[i][j + 1] == '-' and grid[i][j + 2] == ':') ++count;
        }
    }
    return count;
}

int happy_vertical_faces(const Matrix& grid) 
{
    int n = grid.size();
    int m = grid[0].size();
    int count = 0;
    for (int j = 0; j < m; ++j) 
    {
        for (int i = 0; i < (n - 2); ++i) // Search for "|v and ^|" removing overlapping (n - 2)
        {
            if (grid[i][j] == '"' and grid[i + 1][j] == '|' and grid[i + 2][j] == 'v') ++count;
            else if (grid[i][j] == '^' and grid[i + 1][j] == '|' and grid[i + 2][j] == '"') ++count;
        }
    }
    return count;
}

int main() {
    int n, m;
    while (cin >> n >> m) 
    {
        Matrix grid(n, vector<char>(m, '0'));
        for (int i = 0; i < n; ++i) 
        {
            for (int j = 0; j < m; ++j) cin >> grid[i][j];
        }
        int TOTAL_HAPPINESS = happy_horizontal_faces(grid) + happy_vertical_faces(grid);
        cout << TOTAL_HAPPINESS << endl;
    }
}
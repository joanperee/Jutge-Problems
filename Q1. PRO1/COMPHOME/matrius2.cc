#include <iostream>
#include <vector>
using namespace std;
// X12077 Submission [15% PRO1]

typedef vector<char> Row;
typedef vector<Row> Matrix;

// PRE: gets the matrix to analize
// POST: returns the counter of how many "happy subsequences" where found
int trobaSubseqFeliços(const Matrix& HappyGrid, int n, int m) 
{
    int count = 0;

    for (int i1 = 0; i1 < n; ++i1) 
    {
        for (int j1 = 0; j1 < m; ++j1) 
        {
            if (HappyGrid[i1][j1] != ':') continue;

            for (int i2 = i1 + 1; i2 < n; ++i2) 
            {
                for (int j2 = j1 + 1; j2 < m; ++j2) 
                {
                    if (HappyGrid[i2][j2] != '-') continue;

                    for (int i3 = i2 + 1; i3 < n; ++i3) 
                    {
                        for (int j3 = j2 + 1; j3 < m; ++j3) 
                        {
                            if (HappyGrid[i3][j3] != ')') continue;

                            // Last check for foramat requirements
                            if (i1 < i2 && i2 < i3 && j1 < j2 && j2 < j3) ++count;
                        }
                    }
                }
            }
        }
    }

    return count;
}

int main() // Principal program: recieves multiple cases
{
    int n, m;
    while (cin >> n >> m) 
    {
        Matrix HappyGrid(n, vector<char>(m, '0'));

        // Read matrix HappyGrid
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> HappyGrid[i][j];
            }
        }

        cout << trobaSubseqFeliços(HappyGrid, n, m) << endl;
    }
}
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

Matrix readMatrix(int n, int m) {
    Matrix mat(n, Row(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) cin >> mat[i][j];
    return mat;
}

int numDecimal(Matrix& mat, int &i)
{
    int n = int(mat.size());
    int m = int(mat[0].size());
    int decimal = 0;
    for (int j = 1; j < m; ++j)
        decimal = decimal * 2 + mat[i][j];  // Fix the calculation here
    ++i;
    if (mat[i][0] == 1) return decimal * (-1);
    else return decimal;
}

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        Matrix mat = readMatrix(n, m);
        int i = 0;

        // Initialize nums with the correct size
        vector<int> nums;

        for (int k = 0; k < n; ++k)
            nums.push_back(numDecimal(mat, i));
        sort(nums.begin(), nums.end());
        for (int q = 0; q < n; ++q) cout << nums[q] << ' ';
        cout << endl;  // Add a newline to separate output for different test cases
    }

    return 0;
}
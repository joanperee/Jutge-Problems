#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int> > Matrix;

Matrix computeSum(Matrix m1)
{
  int n = int(m1.size());
  int m = int(m1[0].size());
  Matrix m2(n, vector<int> (m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (i == 0 and j == 0)
	m2[i][j] = m1[i][j];
      else if (i == 0)
	m2[i][j] = m1[i][j] + m2[i][j-1];
      else if (j == 0)
	m2[i][j] = m1[i][j] + m2[i-1][j];
      else
	m2[i][j] = m1[i][j] + m2[i-1][j] + m2[i][j-1] - m2[i-1][j-1];
    }
  }
  return m2;
}

Matrix readMatrix()
{
  int n, m;
  cin >> n >> m;
  Matrix matrix(n, vector<int> (m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char c;
      cin >> c;
      matrix[i][j] = c-'0';
    }
  }
  return matrix;
}

void printMatrix(Matrix matrix)
{
  int n = int(matrix.size());
  int m = int(matrix[0].size());
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (j > 0) cout << " ";
      cout << matrix[i][j];
    }
    cout << endl;
  }
}

int main()
{
  Matrix m1 = readMatrix();
  Matrix m2 = computeSum(m1);
  cout << endl;
  printMatrix(m2);
}

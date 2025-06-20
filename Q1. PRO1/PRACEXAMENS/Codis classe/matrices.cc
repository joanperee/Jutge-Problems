#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

typedef vector<vector<int> > Matrix;

/*
// Pre: both m1 and m2 have the same non-0 dimensions 
// Post: returns the result of summing m1 and m2
Matrix sum(Matrix m1, Matrix m2)
{
  int n = int(m1.size());
  int m = int(m1[0].size());
  Matrix m3(n, vector<int> (m));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      m3[i][j] = m1[i][j] + m2[i][j];
  return m3;
}

// Pre: Dimensions of m1,m2 are not null, and second dimension of m1 equals first dimendion of m2.
// Post: returns the result of multiplying m1 and m2
Matrix multiply(Matrix m1, Matrix m2)
{
  int n = int(m1.size());
  int p = int(m1[0].size());
  int m = int(m2[0].size());
  Matrix m3(n, vector<int> (m, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      for (int k = 0; k < p; k++) { 
	m3[i][j] += m1[i][k] * m2[k][j];
	//cout << " i " << i << " j " << j << " m3[i][j] " << m3[i][j] << endl;
      }
    }
  }
  return m3;
}

Matrix readMatrix()
{
  int n, m;
  cin >> n >> m;
  Matrix matrix(n, vector<int> (m));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> matrix[i][j];
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
  Matrix m2 = readMatrix();
  if (int(m1.size()) != int(m2.size()) or int(m1[0].size()) != int(m2[0].size())) {
    cout << "Error: wrong dimensions" << endl;
    exit(1);
  }
  //cout << "Sum:" << endl;
  //printMatrix(sum(m1, m2));
  cout << "Multiply:" << endl;
  printMatrix(multiply(m1, m2));
}

*/

// Pre: both m1 and m2 have the same non-0 dimensions 
// Post: returns the result of summing m1 and m2
Matrix operator+(Matrix m1, Matrix m2)
{
  int n = int(m1.size());
  int m = int(m1[0].size());
  Matrix m3(n, vector<int> (m));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      m3[i][j] = m1[i][j] + m2[i][j];
  return m3;
}

// Pre: Dimensions of m1,m2 are not null, and second dimension of m1 equals first dimendion of m2.
// Post: returns the result of multiplying m1 and m2
Matrix operator*(Matrix m1, Matrix m2)
{
  int n = int(m1.size());
  int p = int(m1[0].size());
  int m = int(m2[0].size());
  Matrix m3(n, vector<int> (m, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      for (int k = 0; k < p; k++) { 
	m3[i][j] += m1[i][k] * m2[k][j];
	//cout << " i " << i << " j " << j << " m3[i][j] " << m3[i][j] << endl;
      }
    }
  }
  return m3;
}

Matrix readMatrix()
{
  int n, m;
  cin >> n >> m;
  Matrix matrix(n, vector<int> (m));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> matrix[i][j];
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

Matrix identity(int n)
{
  Matrix matrix(n, vector<int> (n, 0));
  for (int i = 0; i < n; i++)
    matrix[i][i] = 1;
  return matrix;
}
/*
Matrix expo(Matrix m, int e)
{
  int n = int(m.size());
  Matrix r = identity(n);
  for (int i = 0; i < e; i++)
    r = r * m;
  return r;
}
*/

Matrix expo(Matrix m, int e)
{
  int n = int(m.size());
  if (e == 0) return identity(n);
  if (e%2 == 0)
    return expo(m*m, e/2);
  return expo(m, e-1) * m;
}

/*
int main()
{
  Matrix m1 = readMatrix();
  Matrix m2 = readMatrix();
  if (int(m1.size()) != int(m2.size()) or int(m1[0].size()) != int(m2[0].size())) {
    cout << "Error: wrong dimensions" << endl;
    exit(1);
  }
  cout << "Sum:" << endl;
  printMatrix(m1 + m2);
  cout << "Multiply:" << endl;
  printMatrix(m1 * m2);
}
*/

int main()
{
  Matrix matrix = readMatrix();
  cout << "Base matrix:" << endl;
  printMatrix(matrix);
  int e;
  while (cin >> e) {
    cout << "exponent e " << e << endl; 
    printMatrix(expo(matrix, e));
  }
}

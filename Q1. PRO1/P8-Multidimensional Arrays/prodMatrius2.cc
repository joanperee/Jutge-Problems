#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu;

Matriu producte(const Matriu& A, const Matriu& B)
{
    int p = A.size();    // A rows
    int q = B.size();    // A columns, B rows
    int r = B[0].size(); // B columns
    Matriu C(p, vector<int>(r, 0)); // By def. C has magnitude of p x r
    for (int i = 0; i < p; ++i)
        for (int j = 0; j < r; ++j)
            for (int k = 0; k < q; ++k) C[i][j] += A[i][k]*B[k][j];
    return C;
}

int main()
{
    int p, q, r;
    while (cin >> p >> q >> r) {
        Matriu A(p, vector<int>(q));
        Matriu B(q, vector<int>(r));
        for (int i = 0; i < p; ++i) {
            for (int j = 0; j < q; ++j) {
                cin >> A[i][j];
            }
        }
        for (int i = 0; i < q; ++i) {
            for (int j = 0; j < r; ++j) {
                cin >> B[i][j];
            }
        }
        Matriu C = producte(A, B);
        for (int i = 0; i < p; ++i) {
            for (int j = 0; j < r; ++j) {
                cout << C[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
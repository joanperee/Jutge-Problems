#include <iostream>
#include <vector>
using namespace std;

typedef vector<vector<int>> Matriu;
void transposa(Matriu& M)
{
    int n = M.size();
    for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j) swap(M[i][j], M[j][i]);
    }
}

int main()
{
    int n;
    while (cin >> n) {
        vector<vector<int>> M(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> M[i][j];
            }
        }
        transposa(M);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << M[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

int elements_comuns (const vector<int>& X, const vector<int>& Y)
{
    int sX = X.size();
    int sY = Y.size();
    int count, i, j;
    count = i = j = 0;
    while (i < sX and j < sY) 
    {
        if (X[i] > Y[j]) ++j;
        else if (X[i] < Y[j]) ++i;
        else 
        {
            ++i;
            ++j;
            ++count;
        }
    }
    return count;
}

int main()
{
    int n, m;
    while (cin >> m >> n) 
    {
        vector<int> X(m);
        for (int i = 0; i < m; ++i) cin >> X[i];

        vector<int> Y(n);
        for (int i = 0; i < n; ++i) cin >> Y[i];
    
        cout << elements_comuns(X, Y) << endl;
    }
    return 0;
}
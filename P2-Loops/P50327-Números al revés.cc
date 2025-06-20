#include <iostream>
using namespace std;

int main ()
{
    string n, n_inv;
    cin >> n;
    for (int i = n.size() - 1; i >= 0; i--)
    {
        n_inv += n[i];
    }
    cout << n_inv << endl;
}
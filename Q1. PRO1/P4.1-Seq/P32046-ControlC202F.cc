#include <iostream>
using namespace std;

int main()
{
    string p;
    cin >> p;
    char n1, n2, n3;
    int numigual = 0;
    while (cin >> n1 >> n2 >> n3)
    {
        numigual += n1 == p[p.size()-2] and n2 == p[p.size()-1] and n3 == p[p.size()];
        n1 = n2;
        n2 = n3;
    }
    cout << numigual << endl;
}
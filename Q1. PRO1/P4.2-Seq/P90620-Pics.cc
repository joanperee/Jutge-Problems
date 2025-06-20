#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2;
    bool hiHaPic = false;
    int picaEstats = 3143;
    while (cin >> n3 and n3 != 0 and not hiHaPic)
    {
        if ((n2 > picaEstats) and (n2 > n1) and (n2 > n3))
        {
            hiHaPic = true;
        }
        n1 = n2;
        n2 = n3;
    }
    if (hiHaPic) cout << "SI" << endl;
    else cout << "NO" << endl;
}
#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    if (n1 == n2 and n1 != n3 and n3 != n4) cout << "YES" << endl;
    else if (n1 == n3 and n1 != n2 and n1 != n4 and n2 != n4) cout << "YES" << endl;
    else if (n1 == n4 and n1 != n2 and n1 != n3 and n2 != n3) cout << "YES" << endl;
    else if (n2 == n3 and n2 != n1 and n2 != n4 and n1 != n4) cout << "YES" << endl;
    else if (n2 == n4 and n2 != n1 and n2 != n3 and n1 != n3) cout << "YES" << endl;
    else if (n3 == n4 and n3 != n1 and n3 != n2 and n1 != n2) cout << "YES" << endl;
    else cout << "NO" << endl;
}
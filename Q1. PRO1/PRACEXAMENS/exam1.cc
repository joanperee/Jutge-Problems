#include <iostream>
using namespace std;

int main()
{
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    if ((n1 == ((n2 + n3)/2.0)) or 
            (n2 == ((n1 + n3)/2.0)) or 
             (n3 == ((n1 + n2)/2.0))) cout << "YES" << endl;
    else cout << "NO" << endl;
}
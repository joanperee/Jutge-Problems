#include <iostream>
using namespace std;

int main()
{
    int a1, b1, a2, b2;
    cin >> a1 >> b1 >> a2 >> b2;
    if (a1 >= a2 and a1 <= b2) cout << "[" << a1 << ",";
    else if (a2 >= a1 and a2 <= b1) cout << "[" << a2 << ",";
    if (b1 >= a2 and b1 <= b2) cout << b1 << "]" << endl;
    else if (b2 >= a1 and b2 <= b1) cout << b2 << "]" << endl;
    else cout << "[]" << endl;
}
#include <iostream>
using namespace std;

int main()
{
    char x, y;
    cin >> x >> y;
    if (int(x) == 65 or int(x) == 80 or int(x) == 86)
    {
        if (x == y) cout << "-" << endl;
        else if (char(x) == 'A' and char(y) == 'P') cout << "1" << endl;
        else if (char(x) == 'P' and char(y) == 'V') cout << "1" << endl;
        else if (char(x) == 'V' and char(y) == 'A') cout << "1" << endl;
        else if (char(x) == 'P' and char(y) == 'A') cout << "2" << endl;
        else if (char(x) == 'A' and char(y) == 'V') cout << "2" << endl;
        else if (char(x) == 'V' and char(y) == 'P') cout << "2" << endl;
    }
}
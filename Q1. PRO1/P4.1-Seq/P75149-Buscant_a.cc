#include <iostream>
using namespace std;

int main()
{
    char p = 0;
    bool thereisa = false;
    while (p != '.' and cin >> p)
    {
        if (p == 'a') thereisa = true;
    }
    if (thereisa) cout << "si" << endl;
    else cout << "no" << endl;
}
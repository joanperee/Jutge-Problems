#include <iostream>
using namespace std;

int main()
{
    char letter;
    int ca, cb, cf, df, cd;
    ca = cb = cf = df = cd;
    while (cin >> letter)
    {
        if (letter == 'a') ++ca;
        else if (letter == 'b') ca = 0;
        else if (letter == 'c' and ca != 0) ++cf;
        if (letter == 'd') cd;
        else if (letter == 'a' and cd != 0) ++df;
        else if (cd != 0 and letter == 'b') cd = 0;
        cout << cf << " " << df << endl;
    }
}
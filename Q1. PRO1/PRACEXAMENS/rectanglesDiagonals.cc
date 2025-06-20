#include <iostream>
using namespace std;

int main()
{
    int f, c, num;
    cin >> f >> c;
    num = 0;
    for (int i = 0; i < f; ++i)
    {
        num = i;
        for (int j = 0; j < c; ++j)
        {
            cout << abs(num%10);
            --num;
        }
        cout << endl;
    }
}
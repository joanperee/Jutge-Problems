#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int n, counter = 0;
    while (cin >> n)
    {
        int aux = n;
        if (aux%x == 0) ++counter;
    }
    cout << counter << endl;
}
#include <iostream>
using namespace std;

int main()
{
    int n, counter = 1;
    while ((cin >> n) and (n%2 != 0))
    {
        ++counter;
    }
    cout << counter << endl;
}
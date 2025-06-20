#include <iostream>
using namespace std;

int factorial(int n)
{
    int prod = 1;
    for (int i = 2; i <= n; ++i) prod *= i;
    return prod;
}

int main()
{
    int x;
    while (cin >> x) {
        cout << factorial(x) << endl;
    }
    return 0;
}
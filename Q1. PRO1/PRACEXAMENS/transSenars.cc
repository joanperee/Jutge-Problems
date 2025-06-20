#include <iostream>
using namespace std;

int main()
{
    int n, aux;
    while (cin >> n)
    {
        while (n > 0)
        {
            aux = n%10;
            n /= 10;
            if (aux%2 == 0) ++aux;
        }
        cout << aux << endl;
    }
}
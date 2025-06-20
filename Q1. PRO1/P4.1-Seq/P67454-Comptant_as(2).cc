#include <iostream>
using namespace std;

int main()
{
    char q = 0;
    int counter = 0;
    while (q != '.' and cin >> q)
    {
        if (q == 'a') ++counter;
    }
    cout << counter << endl;
}
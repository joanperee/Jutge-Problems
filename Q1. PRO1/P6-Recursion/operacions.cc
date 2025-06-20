#include <iostream>
using namespace std;

int operacio_recursiva()
{
    char c;
    cin >> c;
    if (c == '+') return operacio_recursiva() + operacio_recursiva();
    if (c == '-') return operacio_recursiva() - operacio_recursiva();
    if (c == '*') return operacio_recursiva() * operacio_recursiva();
    return c - '0';
}

int main()
{
    cout << operacio_recursiva() << endl;
}
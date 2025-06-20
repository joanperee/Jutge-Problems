#include <iostream>
using namespace std;

void girarLLista()
{
    string s;
    if (cin >> s)
    {
        girarLLista();
        cout << s << endl;
    }
}

int main()
{
    girarLLista();
}
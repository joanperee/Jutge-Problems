#include <iostream>
using namespace std;

bool es_any_de_traspas(int any)
{
    bool esAny = false;
    if (any%100 == 0 and any%400) esAny = true;
    else if (any%4 == 0) esAny = true;
    else esAny = false;
    return esAny;
}

int main()
{
    int a;
    cin >> a;
    cout << (es_any_de_traspas(a) ? "true" : "false") << endl;
    return 0;
}
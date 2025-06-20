#include <iostream>
#
using namespace std;

bool es_capicua(int n)
{
    int aux = n;
    int swap = 0;
    while (aux != 0) 
    {
        swap = swap*10 + aux%10;
        aux /= 10;
    }
    return swap == n;
}

int main() {
    int n;
    while (cin >> n) cout << (es_capicua(n) ? "true" : "false") << endl;
    return 0;
}
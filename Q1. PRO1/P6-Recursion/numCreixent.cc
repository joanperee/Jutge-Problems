#include <iostream>
using namespace std;

bool es_creixent(int n)
{
    if (n < 10) return true;
    int ultim_digit = n%10;
    n /= 10;
    int anterior_digit = n%10;
    if (ultim_digit >= anterior_digit) return es_creixent(n);
    else return false;
}

int main()
{
    int n;
    while (cin >> n)
        cout << (es_creixent(n) ? "true" : "false") << endl;
    return 0;
}
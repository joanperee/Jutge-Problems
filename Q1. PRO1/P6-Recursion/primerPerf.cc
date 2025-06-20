#include <iostream>
using namespace std;

bool es_primer(int n) 
{
    if (n < 2) return false;
    for (int i = 2; i*i <= n; ++i) 
    {
        if (n%i == 0) return false;
    }
    return true;
}

int suma_digits(int n)
{
    int sumaDigits = 0;
    while (n > 0)
    {
        sumaDigits += n%10;
        n /= 10;
    }
    return sumaDigits;
}

bool es_primer_perfecte(int n)
{
    bool primer = es_primer(n);
    if (not primer or n < 10) return es_primer(n);
    else return es_primer_perfecte(suma_digits(n));
}


int main() {
    int n;
    while (cin >> n) cout << (es_primer_perfecte(n) ? "true" : "false") << endl;
    return 0;    
}
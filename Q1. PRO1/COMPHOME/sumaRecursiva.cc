#include <iostream>
using namespace std;

//Funcio per calcular potencies obviant la llibreria cmath
int potencia(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; ++i) result *= base; 
    return result;
}

//Funcio recursiva per implementar la suma alternada
int simpleAlternatedSum(int n)
{
    int b = -1;
    int e = n + 1;
    if (n == 0) return 0;
    else return potencia(b, e)*n + simpleAlternatedSum(n - 1);
}

//Programa principal
int main()  
{
    int n;
    while (cin >> n)
        cout << simpleAlternatedSum(n) << endl;
}
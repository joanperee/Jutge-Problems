#include <iostream>
using namespace std;


bool c_frac(int n1, int d1, int n2, int d2)
{
    double a, b, c, d;
    a = n1; b = d1; c = n2; d = d2;
    double result1, result2;
    result1 = result2 = 0;
    result1 = a/b;
    result2= c/d;
    if (result1 < result2) return true;
    else return false;
}


int main() {
    int n1, d1, n2, d2;
    while (cin >> n1 >> d1 >> n2 >> d2) {
        if (c_frac(n1,d1,n2,d2)) cout << "si" << endl;
        else cout << "no" << endl;
    }   
}
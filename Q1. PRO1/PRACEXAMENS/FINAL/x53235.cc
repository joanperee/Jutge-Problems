#include <iostream>
using namespace std;

// pre: a y b son no-negativos. Además, a > 0 o b > 0
// post: calcula la pareja de coeficientes divertidos x e y definidos anteriormente.
//       Se cumple xa + yb = mcd(a,b)
int funny_coeffs(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = funny_coeffs(b, a%b, x1, y1);
    x = y1;
    y = x1 - (a / b) * y1;
    return d;
}

int main() {
    int a, b, x, y;
    while (cin >> a >> b) {
        int d = funny_coeffs(a, b, x, y);
        cout << x << ' ' << y << ' ' << d << endl;
    }
}

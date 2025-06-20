#include <iostream>
using namespace std;

// PRE: true
// POST: returns how many digits x has
int numDigits(int x) {
    int count = 1;
    while (x > 9) {
        x /= 10;
        ++count;
    }
    return count;
}

// PRE: x has an odd number of digits
// POST: returns the central digit of x
int calculaCentre(int x, int d) {
    for (int i = 0; i < d / 2; ++i) {
        x /= 10;
    }
    return x % 10;
}

int main() {
    int n;
    cin >> n;
    int a, b;
    char winner = '='; // Default is a tie
    int da, db;        // Number of digits for a and b

    for (int i = 0; i < n; ++i) {
        cin >> a;
        da = numDigits(a);
        if (da % 2 == 0 && winner != 'A') {
            winner = 'B'; // Anna loses if her number has an even number of digits
        }
        if (i > 0 && calculaCentre(a, da) != calculaCentre(b, db) && winner != 'A') {
            winner = 'B'; // Anna loses if her digit center doesn't match the previous number
        }

        cin >> b;
        db = numDigits(b);
        if ((db % 2 == 0 || calculaCentre(b, db) != calculaCentre(a, da)) && winner != 'B') {
            winner = 'A'; // Bernat loses if his number has an even number of digits or mismatch
        }
    }

    cout << winner << endl;
    return 0;
}

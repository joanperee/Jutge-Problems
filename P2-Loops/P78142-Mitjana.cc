#include <iostream>
using namespace std;

int main () {
    cout.setf(ios::fixed);
    cout.precision(2);
	double n, avg = 0.00, total = 0.00;
    while (cin >> n) {
        total += n;
        ++avg;
    }
    avg = total/avg;
    cout << avg << endl;
}
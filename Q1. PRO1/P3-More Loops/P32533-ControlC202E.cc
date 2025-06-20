#include <iostream>
using namespace std;


int main() {
	
    int n, aux;
	cin >> n;
	aux = n;
	for (int i = 0; i < aux; ++i) {
		for (int j = 1; j < n; ++j) cout << "+";
		cout << "/";
		for (int k = aux; k > n; --k) cout << "*";
		cout << endl;
		--n;
	}
}
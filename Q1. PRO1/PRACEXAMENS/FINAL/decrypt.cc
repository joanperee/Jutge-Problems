#include <iostream>
#include <vector>
using namespace std;

void decrypt(const vector<int>& v, int x) {
    int n = int(v.size());
    bool keyFound = false;
    for (int i = 0; (i < n and not keyFound); ++i) {
        for (int j = (i + 1); (j < n and not keyFound); ++j) {
            if (x == (v[i] + v[j])) {
                cout << i << endl;
                keyFound = true;
            }
        }
    }
}

int main() {
    int n, x;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
    while (cin >> x) decrypt(v, x);
}
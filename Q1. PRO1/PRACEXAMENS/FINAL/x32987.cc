#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool rValida(string s)
{
    int n = int(s.size());
    bool rFound = false;
    if (s[0] == 'r') rFound = true;
    else {
        for (int i = 1; i < n; ++i) {
            if (s[i-1] != 'a' and s[i-1] != 'e' and s[i-1] != 'i' and
                s[i-1] != 'o' and s[i-1] != 'u' and s[i] == 'r') {
                    rFound = true;
                }
        }
    }
    return rFound;
}

int main()
{
    string s;
    int numseq = 1;
    vector<int> solutions; 
    while (cin >> s) {
        if (s != "STOP") {
            solutions.push_back(rValida(s));
        }
        if (s == "STOP") {
            int count = 0;
            for (int i = 1; i < solutions.size(); ++i) {
                if (solutions[i-1] == 1 and solutions[i] == 1) ++count;
            }
            cout << numseq << ": " << count << endl;
            ++numseq;
            for (int i = 0; i < solutions.size(); ++i) solutions[i] = 0;
        }
    }
}
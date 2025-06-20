#include <iostream>
#include <vector>
using namespace std;

void reversedString(string &s) 
{
    int size = s.size();
    for (int i = 0; i < (size/2); ++i) 
    {
        char aux2 = s[i];
        s[i] = s[size - i - 1];
        s[size - i - 1] = aux2;
    }
}

void reversedExpressions(int n)
{
    vector<string> expressions(n);
    int size = expressions.size();
    vector<string> aux(n);
    for (int input = 0; input < n; ++input) 
    {
        cin >> expressions[input];
        reversedString(expressions[input]);
    }
    for (int i = 0; i < size; ++i) aux[n - 1 - i] = expressions[i];
    for (int i = 0; i < size; ++i) expressions[i] = aux[i];
    for (int output = 0; output < n; ++output) cout << expressions[output] << endl;
}

int main()
{
    int n;
    cin >> n;
    reversedExpressions(n);
}
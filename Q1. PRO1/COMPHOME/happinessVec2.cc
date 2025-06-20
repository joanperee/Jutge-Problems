#include <iostream>
#include <string>
using namespace std;

// Pre: c1,c2,c3 are pairwise different characters.
// Post: returns the number of triples (i1,i2,i3) such that 0<=i1<i2<i3<s.size() and
//       s[i1]=c1, s[i2]=c2, s[i3]=c3.
int numberSubsequences(const string &s, char c1, char c2, char c3)
{
    int n = s.size();
    int count = 0;
    int count_c1 = 0;
    int count_c2 = 0;
    char base;
    for (int i = 0; i < n; ++i) // One iteration through the whole string
    {
        base = s[i]; // Evaluated char
        if (base == c1) ++count_c1; // c1 found
        else if (base == c2) count_c2 = count_c2 + count_c1; // all c2 previous ocurrences
        else if (base == c3) count = count + count_c2; // all c3 ocurrences/subsequences
    }
    return count;
}

// Pre:
// Post: returns the number of triples (i1,i2,i3) such that 0<=i1<i2<i3<s.size() and
//       either s[i1]=':', s[i2]='-', s[i3]=')' or s[i1]='(', s[i2]='-', s[i3]=':'.
int numberHappySubsequences(const string &s) 
{
    return numberSubsequences(s, ':', '-', ')') + numberSubsequences(s, '(', '-', ':');
}

// Pre:
// Post: returns the number of triples (i1,i2,i3) such that 0<=i1<i2<i3<s.size() and
//       either s[i1]=':', s[i2]='-', s[i3]='(' or s[i1]=')', s[i2]='-', s[i3]=':'.
int numberSadSubsequences(const string &s)
{
    return numberSubsequences(s, ':', '-', '(') + numberSubsequences(s, ')', '-', ':');
}

int main()
{
    string s;
    while (cin >> s)
        cout << numberHappySubsequences(s) << ' ' << numberSadSubsequences(s) << endl;
}
#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
bool isPalindromic(string s)
{
  int n = int(s.size());
  for (int i = 0; i < n; i++)
    if (s[i] != s[n-1-i])
      return false;
  return true;
}

bool isPalindromic(string s)
{
  int n = int(s.size());
  for (int i = 0; i < n/2; i++)
    if (s[i] != s[n-1-i])
      return false;
  return true;
}

bool isPalindromic(string s)
{
  int n = int(s.size());
  for (int i = 0, j = n-1; i < j; i++, j--)
    if (s[i] != s[j])
      return false;
  return true;
}

bool isPalindromic(string s)
{
  int n = int(s.size());
  if (n <= 1) return true;
  if (s[0] != s[n-1]) return false;
  return isPalindromic(s.substr(1,n-2));
}

// Execute the following on the command line:
// ulimit -s unlimited
int main()
{
  string s;
  while (cin >> s)
    if (isPalindromic(s)) cout << "Is palindromic" << endl;
    else cout << "Is not palindromic" << endl;
}
*/

// Pre:
// Post: checks if the substring s[i..j] is palindromic.
bool isPalindromic(string &s, int i, int j)
{
  if (j <= i) return true;
  if (s[i] != s[j]) return false;  
  return isPalindromic(s, i+1, j-1);
}

bool isPalindromic(string s)
{
  return isPalindromic(s, 0, int(s.size())-1);
}

/*
int main()
{
  int n;
  while (cin >> n) {
    string s(n, 'a');
    if (isPalindromic(s)) cout << "Is palindromic" << endl;
    else cout << "Is not palindromic" << endl;
  }
}
*/

vector<int> palindromicRadius(string s)
{
  int n = int(s.size());
  vector<int> r(n, 0);
  for (int i = 0; i < n; i++) {
    while (0 <= i-r[i]-1 and i+r[i]+1 < n and s[i-r[i]-1] == s[i+r[i]+1])
      r[i]++;
  }
  return r;
}

void printVec(vector<int> v)
{
  for (int i = 0; i < int(v.size()); i++) {
    //if (i > 0) cout << " ";
    cout << v[i];
  }
  cout << endl;
}

int main()
{
  string s;
  while (cin >> s)
    printVec(palindromicRadius(s));
}


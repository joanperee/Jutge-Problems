#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
int find(const vector<int> &v, int x)
{
  int n = int(v.size());
  int inf = -1;
  int sup = n;
  // We are keeping: v[inf] <= x < v[sup]
  while (inf+1 < sup) {
    int med = (inf+sup)/2;
    if (v[med] < x) inf = med;
    else sup = med;
  }
  if (-1 < inf and v[inf] == x) return inf;
  return -1;
}
*/

int find(const vector<int> &v, int x)
{
  int n = int(v.size());
  int inf = -1;
  int sup = n;
  // We are keeping: v[inf] < x <= v[sup]
  while (inf+1 < sup) {
    int med = (inf+sup)/2;
    if (v[med] < x) inf = med;
    else sup = med;
  }
  if (sup < n and v[sup] == x) return sup;
  return -1;
}

int main()
{
  int n;
  while (cin >> n) {
    vector<int> v(n);
    for (int i = 0; i < n; i++)
      v[i] = rand()%n;
    sort(v.begin(), v.end());
    int x = rand()%n;
    cout << "v: ";
    for (int i = 0; i < n; i++) {
      if (i > 0) cout << " ";
      cout << v[i];
    }
    cout << endl;
    cout << "x: " << x << endl;
    cout << "position: " << find(v, x) << endl;
  }
}
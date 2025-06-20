#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void printVec(vector<int> v)
{
  for (int i = 0; i < int(v.size()); i++) {
    if (i > 0) cout << " ";
    cout << v[i];
  }
  cout << endl;
}

vector<int> minimumSort(vector<int> v)
{
  int n = int(v.size());
  for (int i = 0; i < n; i++)
    for (int j = i; j < n; j++)
      if (v[j] < v[i])
	swap(v[j], v[i]);
  return v;
}

vector<int> insertionSort(vector<int> v)
{
  int n = int(v.size());
  for (int i = 0; i < n; i++)
    for (int j = i; 0 < j and v[j] < v[j-1]; j--)
      swap(v[j], v[j-1]);
  return v;
}

vector<int> merge(vector<int> v1, vector<int> v2)
{
  int n1 = int(v1.size());
  int n2 = int(v2.size());
  int i1 = 0;
  int i2 = 0;
  vector<int> v;
  while (i1 < n1 and i2 < n2)
    if (v1[i1] <= v2[i2]) v.push_back(v1[i1++]);
    else v.push_back(v2[i2++]);
  while (i1 < n1) v.push_back(v1[i1++]);
  while (i2 < n2) v.push_back(v2[i2++]);
  return v;
}

vector<int> mergeSort(vector<int> v)
{
  int n = int(v.size());
  if (n <= 1) return v;
  vector<int> v1, v2;
  for (int i = 0; i < n; i++)
    if (i < n/2) v1.push_back(v[i]);
    else v2.push_back(v[i]);
  vector<int> u1 = mergeSort(v1);
  vector<int> u2 = mergeSort(v2);
  return merge(u1, u2);
}

int main()
{
  int n;
  while (cin >> n) {
    vector<int> v(n);
    for (int i = 0; i < n; i++)
      v[i] = i;
    random_shuffle(v.begin(), v.end());
    //printVec(v);
    //vector<int> u = minimumSort(v);
    //vector<int> u = insertionSort(v);
    vector<int> u = mergeSort(v);
    printVec(u);
    cout << "Finished" << endl;
  }
}

#include <iostream>
using namespace std;

void dibuixa_barres(int n)
{
  if (n == 0) return;
  dibuixa_barres(n-1);
  cout << string(n, '*') << endl;
  dibuixa_barres(n-1);
}

int main()
{
    int n;
    while (cin >> n) dibuixa_barres(n);
}
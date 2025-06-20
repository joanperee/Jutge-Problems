#include <iostream>
using namespace std;


void cross(int n, char c)
{
    //Part superior
    for (int linia = 0; linia < (n/2); ++linia)
    {
        for (int espai = 0; espai < (n/2); ++espai) cout << ' ';
        cout << c << endl;
    }

    //Línia enmig
    for (int mig = 0; mig < n; ++mig) cout << c;
    cout << endl;

    //Part inferior
    for (int linia2 = 0; linia2 < (n/2); ++linia2)
    {
        for (int espai2 = 0; espai2 < (n/2); ++espai2) cout << ' ';
        cout << c << endl;
    }
}


int main() {
  int n;
  char c;
  while (cin >> n >> c) cross(n, c);
  return 0;
}
#include <iostream>
#include <string>
#include <cmath>

using namespace std;


/*
// Pre: n >= 0
// Post: returns n!
int factorialAux(int n)
{
  int p = 1;
  for (int i = 1; i <= n; i++)
    p *= i;
  return p;
}

// Pre: n >= 0
// Post: returns n!
int factorial(int n)
{
  if (n == 0) return 1;
  return factorial(n-1) * n;
}

int main()
{
  int n;
  while (cin >> n)
    cout << factorial(n) << endl;
}
*/

/*
// Pre: the input has a list of strings, each one at a different line.
// Post: the input strings are printed in reverse order
void printReverse()
{
  string s;
  if (cin >> s) {
    printReverse();
    cout << s << endl;
  }
}

int main()
{
  printReverse();
}
*/

/*
void draw(int n)
{
  if (n == 0) return;
  draw(n-1);
  draw(n-1);
  cout << string(n, '*') << endl;
}


int main()
{
  int n;
  while (cin >> n) {
    draw(n);
    cout << endl;
  }
}
*/
/*
int hanoi(int n)
{
  if (n == 0) return 0;
  //return hanoi(n-1)+1+hanoi(n-1);
  return 2*hanoi(n-1)+1;
}

int main()
{
  int n;
  while (cin >> n)
    cout << hanoi(n) << endl;
}
*/

/*
int main()
{
  int n;
  while (cin >> n)
    cout << int(sqrt(n)) << endl;
}
*/

/*
int mysqrt(int n)
{
  if (n == 0) return 0;
  int r = mysqrt(n/4);
  int R = 2*r;
  if ((R+1)*(R+1) <= n) R++;
  return R;
}
*/

int mysqrt(int n)
{
  if (n == 0) return 0;
  int r = mysqrt(n/100);
  int R = 10*r;
  while ((R+1)*(R+1) <= n) R++;
  return R;
}


int main()
{
  int n;
  while (cin >> n)
    cout << int(mysqrt(n)) << endl;
}

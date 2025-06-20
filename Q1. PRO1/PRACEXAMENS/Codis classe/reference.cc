#include <iostream>

using namespace std;

/*
void func(int a, int &b, int &c, int &d)
{
  a++;
  b++;
  c++;
  d++;
}

int main()
{
  int x = 10;
  int y = 20;
  func(x, x, y, y);
  cout << x << endl; // output: 11
  cout << y << endl; // output: 22
}


int main()
{
  int x = 10;
  int &y = x;
  cout << x << endl; // output: 10
  cout << y << endl; // output: 10
  x++;
  y++;
  cout << x << endl; // output: 12
  cout << y << endl; // output: 12
}
*/

/*
int gcd(int a, int b)
{
  if (a < b) swap(a, b);
  if (b == 0) return a;
  return gcd(a-b, b);
}
*/
/*
This command increases the system stack as much as possible:

ulimit -s unlimited
 */

/*
int gcd(int a, int b)
{
  if (a < b) swap(a, b);
  if (b == 0) return a;
  return gcd(a%b, b);
}

int main()
{
  int a, b;
  while (cin >> a >> b)
    cout << gcd(a, b) << endl;
}
*/


int root2(int n)
{
  if (n == 0) return 0;
  int r = root2(n/4);
  int R = 2*r;
  if ((R+1)*(R+1) <= n) R++;
  return R;
}

int expo(int b, int e)
{
  int p = 1;
  for (int i = 0; i < e; i++)
    p *= b;
  return p;
}

int root3(int n)
{
  if (n == 0) return 0;
  int r = root3(n/8);
  int R = 2*r;
  if (expo(R+1, 3) <= n) R++;
  return R;
}

/*
int roote(int n, int e)
{
  if (n == 0) return 0;
  int r = roote(n/expo(2, e), e);
  int R = 2*r;
  if (expo(R+1, e) <= n) R++;
  return R;
}
*/

int roote(int n, int e)
{
  if (n == 0) return 0;
  int r = roote(n/(1<<e), e);
  int R = 2*r;
  if (expo(R+1, e) <= n) R++;
  return R;
}

int main()
{
  int n, e;
  while (cin >> n >> e)
    cout << roote(n, e) << endl;
}


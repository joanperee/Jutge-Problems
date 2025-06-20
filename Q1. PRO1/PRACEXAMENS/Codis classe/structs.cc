#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

struct Point {
  double x;
  double y;
};

Point buildPoint(double x, double y)
{
  Point p;
  p.x = x;
  p.y = y;
  return p;
}

/*
Point sum(Point p1, Point p2)
{
  Point p3;
  p3.x = p1.x + p2.x;
  p3.y = p1.y + p2.y;
  return p3;
}
*/

/*
Point sum(Point p1, Point p2)
{
  return buildPoint(p1.x+p2.x, p1.y+p2.y);
}

Point sub(Point p1, Point p2)
{
  return buildPoint(p1.x-p2.x, p1.y-p2.y);
}

Point mul(double a, Point p)
{
  return buildPoint(a*p.x, a*p.y);
}

Point div(Point p, double d)
{
  return buildPoint(p.x/d, p.y/d);
}

double modulo(Point p)
{
  return sqrt(p.x*p.x + p.y*p.y);
}

double distance(Point p1, Point p2)
{
  return modulo(sub(p1, p2));
}
*/

Point operator+(Point p1, Point p2)
{
  return buildPoint(p1.x+p2.x, p1.y+p2.y);
}

Point operator-(Point p1, Point p2)
{
  return buildPoint(p1.x-p2.x, p1.y-p2.y);
}

Point operator*(double a, Point p)
{
  return buildPoint(a*p.x, a*p.y);
}

Point operator/(Point p, double d)
{
  return buildPoint(p.x/d, p.y/d);
}

double modulo(Point p)
{
  return sqrt(p.x*p.x + p.y*p.y);
}

double distance(Point p1, Point p2)
{
  return modulo(p1-p2);
}

Point readPoint()
{
  Point p;
  cin >> p.x >> p.y;
  return p;
}

void printPoint(Point p)
{
  cout << p.x << " " << p.y << endl;
}

/*
int main()
{
  Point p;
  p.x = 1;
  p.y = 2;
  Point p2 = p;
  cout << p2.x << endl;
  cout << p2.y << endl;
  Point &p3 = p;
  p.x = 8;
  cout << p3.x << endl;
  cout << p2.x << endl;
}
*/

typedef vector<Point> Polygonal;

Polygonal readPolygonal()
{
  int n;
  cin >> n;
  Polygonal polygonal(n);
  for (int i = 0; i < n; i++)
    polygonal[i] = readPoint();
  return polygonal;
}

double perimeter(Polygonal polygonal)
{
  int n = int(polygonal.size());
  double d = 0;
  for (int i = 0; i < n; i++)
    d += distance(polygonal[i], polygonal[(i+1)%n]);
  return d;
}

/*
int main()
{
  printPoint(sum(readPoint(), readPoint()));
}
*/

/*
int main()
{
  cout << perimeter(readPolygonal()) << endl;
}
*/

int main()
{
  srand(time(NULL));
  vector<int> v(10);
  for (int i = 0; i < 10; i++)
    v[i] = i;
  random_shuffle(v.begin(), v.end());
  for (int i = 0; i < 10; i++) {
    if (i > 0) cout << " ";
    cout << v[i];
  }
  cout << endl;
  sort(v.begin(), v.end());
  for (int i = 0; i < 10; i++) {
    if (i > 0) cout << " ";
    cout << v[i];
  }
  cout << endl;
}


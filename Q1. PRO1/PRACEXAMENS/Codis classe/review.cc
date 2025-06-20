#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

struct Point {
  double x,y;
};

Point operator+(Point p1, Point p2)
{
  Point p3;
  p3.x = p1.x + p2.x;
  p3.y = p1.y + p2.y;
  return p3;
}

/*
int main()
{
  Point p, q;
  p.x = 2;
  p.y = 5;
  q.x = 1;
  q.y = 2;
  Point r = p + q;
  cout << "(" << r.x << "," << r.y << ")" << endl;
}
*/

void printVec(vector<Point> v)
{
  for (int i = 0; i < int(v.size()); i++)
    cout << "(" << v[i].x << "," << v[i].y << ")";
  cout << endl;
}

double norm(Point p)
{
  return p.x*p.x + p.y*p.y;
}

bool compareNorm(Point p1, Point p2)
{
  return norm(p1) < norm(p2);
}

bool compareX(Point p1, Point p2)
{
  return p1.x < p2.x;
}

ostream &operator<<(ostream &os, vector<Point> v)
{
  for (int i = 0; i < int(v.size()); i++)
    os << "(" << v[i].x << "," << v[i].y << ")";
  return os;
}

int main()
{
  int n;
  while (cin >> n) {
    vector<Point> v(n);
    for (int i = 0; i < n; i++) {
      v[i].x = rand()%11-5;
      v[i].y = rand()%11-5;
    }
    printVec(v);
    cout << "Sort by norm:" << endl;
    sort(v.begin(), v.end(), compareNorm);
    printVec(v);
    cout << "Sort by x:" << endl;
    sort(v.begin(), v.end(), compareX);
    //printVec(v);
    cout << v << endl;
  }
}

#include <iostream>
#include <cmath>
using namespace std;


double dist_or(double x,double y)
{
    return sqrt(pow(x,2) + pow(y,2));
}


int main() {
  double x,y;
  while (cin >> x >> y) cout << dist_or(x,y) << endl;
}
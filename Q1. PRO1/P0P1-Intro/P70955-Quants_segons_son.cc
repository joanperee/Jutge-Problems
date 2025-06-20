#include <iostream>
using namespace std;

int main()
{
    int a, d, h, m, s;
    cin >> a >> d >> h >> m >> s;
    int result = a*31536000 + d*86400 + h*3600 + m*60 + s;
    cout << result << endl;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        double harm = 0.0;
		for (int i = (m + 1); i <= n; ++i)
        {
			harm += (1.0 / (double(i)));
		}
		cout << fixed << setprecision(10) << harm << endl;
    }
}
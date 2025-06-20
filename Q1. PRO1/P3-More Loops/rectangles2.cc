#include <iostream>
using namespace std;

int main ()
{
    int n, m, count;
    count = 0;
	while (cin >> n >> m)
	{
		if (count != 0) cout << endl;
		int num = 0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << (9 - num%10);
				++num;
			}
			cout << endl;
		}
		++count;
	}
}
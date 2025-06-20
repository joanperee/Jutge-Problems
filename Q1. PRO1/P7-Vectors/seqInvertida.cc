#include <iostream>
#include <vector>
using namespace std;

void invertir_vector(int m)
{
    if (m == 0) cout << endl;
    else
    {
        int i = 0;
        vector<int> nums(m);
        for (; i < m; ++i) cin >> nums[i];
        for (i = (m - 1); i > 0; --i) cout << nums[i] << ' ';
        cout << nums[0] << endl;
    }
}

int main()
{
    int m;
    while (cin >> m)
    {
        invertir_vector(m);
    }
}
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m;
    while (cin >> m)
    {
        vector<int> nums(m);
        int sum = 0;
        for (int i = 0; i < m; ++i)
        {
            cin >> nums[i];
            sum += nums[i];
        }
        bool isFound = false;
        int i = 0;
        while ((i < m) and (not isFound))
        {
            if (nums[i] == (sum - nums[i])) isFound = true;
            else isFound = false;
            ++i;
        }
        if (isFound) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
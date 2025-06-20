#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, cont;
    cin >> n;
    cont = 0;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];
    for (int j = 0; j < (n - 1); ++j)
    {
        if (nums[j] == nums[n - 1]) ++cont;
    }
    cout << cont << endl; 
}
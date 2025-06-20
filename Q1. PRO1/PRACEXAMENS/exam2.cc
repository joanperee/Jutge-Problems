#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        int countPic = 0;
        while (n >= 100)
        {
            if (n%10 < (n/10)%10 and (n/10)%10 > (n/100)%10) ++countPic;
            n = n/10;
        }
        cout << countPic << endl;
    }
}
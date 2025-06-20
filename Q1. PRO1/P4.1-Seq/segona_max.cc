#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string s, max2, max1;
    max2 = max1 = " ";
    
    while (cin >> s) 
    {
        if (s != max1 and s > max2) 
        {
            max2 = s;
            if (max2 > max1) {
                s = max1;
                max1 = max2;
                max2 = s;
            }
        }
    }
    if (max2 != "") cout << max2 << endl;
}
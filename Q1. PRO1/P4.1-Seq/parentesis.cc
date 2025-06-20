#include <iostream>
using namespace std;

int main() 
{
    char p;
    int sum = 0;
    int count_oberts = 0;

    while (cin >> p and sum >= 0) 
    {
        if (p == '(') 
        {
            ++sum;
            ++count_oberts;
        } 
        else if (p == ')') 
        {
            --sum;
        } 
        else cout << "no" << endl;
    }
    if (sum != 0) cout << "no" << endl;
    else if (count_oberts == 0) cout << "si" << endl;
    else cout << "si" << endl;
}
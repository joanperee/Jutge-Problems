#include <iostream>
using namespace std;

void nums_inside_nums(int d)
{
    cout << d;
    if (d == 0) cout << 0;
    else {
        for (int i = d; i > 0; --i) nums_inside_nums(d - 1);
        cout << d;
    }
}

int main()
{
    int d; 
    while (cin >> d)
    {
        nums_inside_nums(d);
        cout << endl;
    }
}
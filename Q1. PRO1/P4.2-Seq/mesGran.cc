#include <iostream>
using namespace std;

int main()
{
    int elements;
    while (cin >> elements)
    {
        int count_elem = 0;
        int max = 0;
        while (count_elem < elements)
        {
            int n;
            cin >> n;
            if (n > max or max == 0) max = n;
            ++count_elem;
        }
        cout << max << endl;
    }
}
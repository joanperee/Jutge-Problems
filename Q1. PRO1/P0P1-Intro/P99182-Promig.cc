#include <iostream>
using namespace std;

int main ()
{
    double n1, n2;
    cin >> n1 >> n2;
    if ((n1 >= -1000 and n1 <= 1000) and (n2 >= -1000 and n2 <= 1000))
    {
       cout << (n1 + n2)/2 << endl; 
    }
    else cout << "error" << endl;
}
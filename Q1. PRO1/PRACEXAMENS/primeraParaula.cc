#include <iostream>
#include <string>
using namespace std;

int main()
{
    string target;
    cin >> target;
    string s;
    int count = 1;
    bool found = false;
    while (not found and cin >> s)
    {
        if (s == target) found = true;
        else ++count;
    }
    if (found) cout << count << endl;
    else cout << "No existe" << endl;
}
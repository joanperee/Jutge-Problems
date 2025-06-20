#include <iostream>
using namespace std;

int main()
{
    char letter;
    cin >> letter;
    if (int(letter) >= 65 and int(letter) <= 90) cout << char(int(letter) + 32) << endl;
    if (int(letter) >= 97 and int(letter) <= 122) cout << char(int(letter) - 32) << endl;
}
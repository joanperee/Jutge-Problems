#include <iostream>
using namespace std;

int main()
{
    char letter;
    cin >> letter;
    if (int(letter) >= 65 and int (letter) <= 90)
    cout << "majuscula" << endl;
    if (int(letter) >= 97 and int(letter) <= 122)
    {
    cout << "minuscula" << endl;
    letter = int(letter) - 32;
    }
    if (int (letter) == 65 or int (letter) == 69 or int (letter) == 73 or int (letter) == 79 or int (letter) == 85) cout << "vocal" << endl;
    else cout << "consonant" << endl;
}

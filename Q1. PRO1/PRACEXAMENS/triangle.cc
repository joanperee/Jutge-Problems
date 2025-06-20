#include <iostream>
using namespace std;

int main()
{
    int i; //FILES
    int j; //COLUMNA
    int n; //MAGNITUD
    cin >> n;
    for (i = 0; i < n; ++i) 
    {
        cout << '*' << endl;
        for (int j = 0; j < i; ++j ) //ESPAIS
        {
            cout << " ";
        }
        for (int k = 0; k < i; ++k) //ASTERISCS
        {
            cout << '*';
        }
        cout << endl;
    }
    cout << endl;
}
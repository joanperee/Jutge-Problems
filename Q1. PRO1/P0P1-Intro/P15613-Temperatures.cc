#include <iostream>
using namespace std;

int main()
{
    int temp;
    cin >> temp;
    if (temp > 30)
    {
        cout << "fa calor" << endl;
        if (temp >= 100) cout << "l'aigua bulliria" << endl;
    }
    else if (temp < 10)
    {
        cout <<"fa fred" << endl;
        if (temp <= 0) cout << "l'aigua es gelaria" << endl;
    }
    else cout << "s'esta be" << endl;
}
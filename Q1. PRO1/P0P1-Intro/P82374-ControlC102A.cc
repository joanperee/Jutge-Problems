#include <iostream>
using namespace std;

int main()
{
    //declaram les variables i establim l'entrada
    int x, a, b, c, d;
    cin >> x >> a >> b >> c >> d;
    //per definició, x pertany a la unió A U B si x pertany a A o pertany a B
    if (x >= a and x <= b) cout << "si" << endl;
    else if (x >= c and x <= d) cout << "si" << endl;
    else cout << "no" << endl;
}
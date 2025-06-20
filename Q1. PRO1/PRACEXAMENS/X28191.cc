#include <iostream>
using namespace std;

int main()
{
    int k, time_1;
    cin >> k >> time_1;
    int time_2, suma_segons, pos;
    suma_segons = pos = 0;
    while (time_2 != -1 and cin >> time_2)
    {   
        suma_segons += time_2 - time_1; 
        time_1 = time_2;
        ++pos;
    }
    cout << pos << endl;
}
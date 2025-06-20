#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int m;
    cin >> m; //Nombre de sequencies
    int count_seq = 0;
    while (count_seq < m) 
    {
        int n;
        cin >> n; //Nombre d'elements dins la sequencia
        int count_n = 0;
        double  min = 0, max = 0, sum = 0, nombres_evaluats; //Variables per operar
        while (count_n < n)
        {
            cin >> nombres_evaluats; //Input dels elements de la sequencia
            sum += nombres_evaluats; 
            if (max < nombres_evaluats or max == 0) max = nombres_evaluats;
            if (nombres_evaluats < min or min == 0) min = nombres_evaluats;
            ++count_n;
        }
        cout << fixed << setprecision(4) << min << ' '  << max << ' ' << sum/n << endl;
        ++count_seq;
    }
}
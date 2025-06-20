#include <iostream>
#include <vector>
using namespace std;

double mitjana_lletres(string s)
{
    int m = s.size();
    double avg = 0;
    int suma_mides = 0;
    for (int i = 0; i < m; ++i)
    {
        suma_mides += s[i].size();
    }
    avg = suma_mides/m;
    return avg;
}

char lletra_mes_frequent(const string& s)
{
    vector <int> counter(LONG_ALFABET, 0);
    int n = s.size();
    for (int i = 0; i < n; ++i) // Augmentar el contador de la lletra corresponent
    {
        ++counter[s[i] - 'a'];
    }
    int pos, freq = 0;
    for (int i = 0; i < LONG_ALFABET; ++i) // Esbrinar frequencia
    {
        if (counter[i] > freq) 
        {
            pos = i;
            freq = counter[i];
        }
    }
    char winner_letter = 'a' + pos; // Passar de nombre a lletra altra vegada
    return winner_letter;
}

int main()
{
    cout.setf(ios::fixed);
    cout.precision(2); 
    const int LONG_ALFABET = 'z' - 'a' + 1; 
    int n;
    cin >> n;
    string s(n);
    for (int i = 0; i < n; ++i) cin >> s[i];
    cout << mitjana_lletres(s) << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << s[i] << ": " << lletra_mes_frequent(s[i]) << endl;
    }
}
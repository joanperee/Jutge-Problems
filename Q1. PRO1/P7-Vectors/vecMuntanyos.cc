#include <iostream>
#include <vector>
using namespace std;

// Correction problem X41120
 
vector<int> calcula_cims(vector<int>& v)
{
    int m = v.size();
    int position = 0;
    int pics_size;
    if (m%2 == 0) pics_size = (m/2 - 1);
    else pics_size = m/2;
    vector<int> pics(pics_size, 0);
    for (int i = 1; i < (m - 1); ++i) 
    {
        if ((v[i] > v[i - 1]) and (v[i] > v[i + 1]))
        {
            pics[position] == v[i];
            ++position;
        }
    }
    return pics;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    // Read perfil_muntanyos vector
    for (int i = 0; i < n; ++i) cin >> v[i];
    int count = 0;
    // Number of pics counter
    for (int i = 0; calcula_cims(v)[i] != 0; ++i) ++count;
    cout << count << ": ";
    // Output pics and max positions before last pic
    int max;
    for (int i = 0; calcula_cims(v)[i] != 0; ++i) 
    {
        cout << calcula_cims(v)[i];
        max = calcula_cims(v)[i];
    }
    cout << endl;
    bool major = false;
    bool primer = true;
    for (int i = 0; calcula_cims(v)[i] != 0; ++i)
    {
        if (calcula_cims(v)[i] > max)
        {
            if (primer) primer = false;
            else cout << " ";
            cout << calcula_cims(v)[i];
            major = true;
        }
    }
    if (not major) cout << "-" << endl;
    else cout << endl;
}
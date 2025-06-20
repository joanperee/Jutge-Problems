#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Programmer{string name; int level;};

bool cmpltu(string a, string b)
{
    return (a < b);
}

int main()
{
    int k;
    while (cin >> k)
    {
        int n, m;
        cin >> n;
        vector<Programmer> listRussian(n);
        for (int i = 0; i < n; ++i) cin >> listRussian[i].name >> listRussian[i].level;
        cin >> m;
        vector<Programmer> listUSA(m);
        for (int i = 0; i < m; ++i) cin >> listUSA[i].name >> listUSA[i].level;
        // Principal iterator
        int i = 0;
        int j = 0;
        int countRussia = 0;
        int countUSA = 0;
        vector<string> finalTeam(k);
        for (int aux = 0; aux < n + m; ++aux)
        {
            int index = (aux % k);
            if (j == m)
            {
                finalTeam[index] = listRussian[i].name;
                ++i;
                ++countRussia;
            }
            else if (i == n)
            {
                finalTeam[index] = listUSA[j].name;
                ++j;
                ++countUSA;
            }
            else if (listRussian[i].level > listUSA[j].level)
            {
                finalTeam[index] = listRussian[i].name;
                ++i;
                ++countRussia;
            }
            else if (listRussian[i].level < listUSA[j].level)
            {
                finalTeam[index] = listUSA[j].name;
                ++j;
                ++countUSA;
            }
            else if ((listRussian[i].level == listUSA[j].level))
            {
                if (countRussia < countUSA)
                {
                    finalTeam[index] = listRussian[i].name;
                    ++i;
                    ++countRussia;
                }
                else if (countRussia > countUSA)
                {
                    finalTeam[index] = listUSA[j].name;
                    ++j;
                    ++countUSA;
                }
                else
                {
                    if (listRussian[i].name < listUSA[j].name)
                    {
                        finalTeam[index] = listRussian[i].name;
                        ++i;
                        ++countRussia;
                    }
                    else
                    {
                        finalTeam[index] = listUSA[j].name;
                        ++j;
                        ++countUSA;
                    }
                }
            }
            if (((aux + 1) % k) == 0)
            {
                sort(finalTeam.begin(), finalTeam.end(), cmpltu);
                for (int z = 0; z < k; ++z)
                {
                    cout << finalTeam[z];
                    if (z != (k - 1)) cout << " ";
                }
                cout << endl;
                fill(finalTeam.begin(), finalTeam.end(), 0);
                countRussia = 0;
                countUSA = 0;
            }
        }
        cout << endl;
    }
}
#include <iostream>
#include <cstdlib>
using namespace std;
// Dichotomic search: Endevina el nombre!

/*
int main()
{
    srand(time(0));
    cout << "Enter your guess. You have a maximum of 6 tries." << endl;
    int guess, tries;
    tries = 0;
    bool correctGuess = false;
    int randNum = rand() % 10001;
    while (tries != 15 and not correctGuess)
    {
        cin >> guess;
        if (guess == randNum) correctGuess = true;
        else 
        {
            if (guess < randNum) cout << "Incorrect. Try a higher number." << endl;
            else cout << "Incorrect. Try a lower number." << endl;
            ++tries;
        }
    }
    if (correctGuess) cout << "Congrats! You guessed correctly the my number in " << tries << " tries." << endl;
    else cout << "Sorry, you exceeded the number of possible tries." << endl;
}
*/

int find(const vector<int> &v, int x)
{
    int n = int(v.size());
    int inf = -1;
    int sup = n;
    //We're keeping v[inf] <= x < v[sup]
    while (inf + 1 < sup)
    {
        int mid = (inf + sup)/2;
        if (v[mid] <= x) inf = mid;
        else sup = mid;
    }
    if (-1 < inf and v[inf] == x) return inf;
    return -1;
}

int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> v(n);
        for (int i = 0; i < n; ++i) v[i] = rand()%n;
        sort(v.begin(), v.end());

        cout << endl;
        cout << "x: " << x << endl;
        cout << "position: " << find(v, x) << endl;
    }
}
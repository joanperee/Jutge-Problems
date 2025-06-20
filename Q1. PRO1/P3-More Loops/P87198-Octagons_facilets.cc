#include <iostream>
using namespace std;

int main ()
{
    int n;
    while (cin >> n)
    {
        int files;
        //ANADA
        for (files = 0; files < (n - 1); ++files)
        {
            for (int espais = 0; espais < ((n - 1) - files); ++espais) cout << " ";
            for (int creus = 0; creus < (n + 2*files); ++creus) cout << "X";
            cout << endl;
        }

        //ENMIG
        for (int j = 0; j <= files; ++j)
        {
            for (int k = 0; k < (3*n - 2); ++k) cout << "X";
            cout << endl;
        }

        //TORNADA
        for (files = 0; files < (n - 1); ++files)
        {
			for (int espais = 0; espais <= files; ++espais) cout <<" ";
			for (int creus = 0; creus < (3*n - 2*files - 4); ++creus) cout <<'X';
			cout<<endl;
		}
		cout<<endl;
    }
}
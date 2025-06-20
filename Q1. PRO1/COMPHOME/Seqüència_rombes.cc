#include <iostream>
using namespace std;

int main ()
{
    int numspace, numrombe;
    while (cin >> numspace >> numrombe)
    {
        int principal_counter = 0;
        while (principal_counter < numrombe)
        {
            //PRIMER ASTERISC
            for (int i = 0; i < numspace; ++i)
            {
                cout << " ";
            }
            cout << "*" << endl;

            //ANADA
            for (int i = 0; i < numspace; ++i)
            {
                for (int j = i; j < (numspace - 1); ++j) {cout << " ";}
                cout << "*";
                for (int j = (i*2 + 1); j > 0; --j) {cout << " ";}
                cout << "*" << endl;
            }

            //TORNADA
            for (int i = (numspace - 1); i > 0; --i)
            {
                for (int j = i; j <= (numspace - 1); ++j) {cout << " ";}
                cout << "*";
                for (int j = (2*i -1); j > 0; --j) {cout << " ";}
                cout << "*" << endl;
            }

            ++principal_counter;

        }
        //DARRER ASTERISC FORA DEL BUCLE PRINCIPAL
            for (int darrer_ast = 0; darrer_ast < numspace; ++darrer_ast)
            {
                cout << " ";
            }
            cout << "*" << endl;
            cout << endl;
    }
}
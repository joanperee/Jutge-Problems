#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n > 0)
    {
        int numpartides = 0;
        while (numpartides < n)
        {
            string card1, card2;
            cin >> card1;
            int points = 0;
            while (cin >> card2 and card2 != "end")
            {
                if (card2 == "multicolor");
                else if (card2 != card1 and card2 != "multicolor")
                {
                    ++points;
                    card1 = card2;
                }
            }
            cout << points << endl;
            ++numpartides;
        }
    }
}
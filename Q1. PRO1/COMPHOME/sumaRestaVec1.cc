#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n; //Quantitat de nombres
    
    vector<int> nums_sequence(n); //Vector dels nombres a avaluar
    for (int i = 0; i < n; ++i) cin >> nums_sequence[i];
    
    string operands_sequence; 
    while (cin >> operands_sequence) //Entrada de multiples strings de chars
    {
        int result = 0; 
        for (int i = 0; i < n; ++i)
        {
            if (operands_sequence[i] == '+') result += nums_sequence[i]*(+1);
            else result += nums_sequence[i]*(-1);
        }
        cout << result << endl;
    }
}
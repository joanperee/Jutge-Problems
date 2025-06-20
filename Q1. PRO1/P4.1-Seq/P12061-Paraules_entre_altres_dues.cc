#include <iostream>
#include <string>
using namespace std;

int main () 
{
	string s;
	int c = 0;
	bool start = false;
	while (cin >> s and s != "final") 
	{
		if (s == "principi") start = true;
		else if (start) ++c;
	}
	if (start and s == "final") cout << c << endl;
	else cout << "sequencia incorrecta" << endl;
}
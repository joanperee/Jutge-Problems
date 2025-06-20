#include <iostream>
#include <cmath>
using namespace std;


void factor(int n, int& f, int& q)
{
	int fmax;
	int qmax;
	int aux = n;
	fmax = f = 2;
	qmax = q = 0;
	while(aux%2 == 0)
    {
		q++;
		aux /= 2;
	}
	qmax = q;
	q = 0;
	f = 3;
	while(f <= sqrt(n))
    {
		if(aux%f == 0)
        {
			++q;
			aux /= f;
			if(q > qmax)
            {
				qmax = q;
				fmax = f;
			}
		}
		else
        {
			f += 2;
			q = 0;
		}
	}
	f = fmax;
	q = qmax;
	if(aux == n)
    {
		f = n;
		q = 1;
	}
}

int main() 
{
    int n, q , f;
    while (cin >> n) 
    {
        f = -1;
        q = 1000;
        factor(n, f, q);
        cout << f << ' ' << q << endl;  
    }
}
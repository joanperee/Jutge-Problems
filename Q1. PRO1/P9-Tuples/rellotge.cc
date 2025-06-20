#include <iostream>
#include <typeinfo>
using namespace std;

struct Rellotge 
{
    int h;      // hores (0 <= h < 24)
    int m;      // minuts (0 <= m < 60)
    int s;      // segons (0 <= s < 60)
};

Rellotge mitja_nit()
{
    Rellotge r;
    r.s = 0;
    r.m = 0;
    r.h = 0;
    return r;
}

void incrementa(Rellotge& r)
{
    ++r.s;
    if (r.s == 60) 
    {
        ++r.m;
        r.s = 0;
        if (r.m >= 60) 
        {
            ++r.h;
            r.m = 0;
        
            if (r.h == 24) r.h = 0;
        }
    }
}
void escriu(const Rellotge& r)
{
    Rellotge r;
    if (r.h < 10) cout << "0" << r.h << ":";
    else cout << r.h << ":";
    if (r.m < 10) cout << "0" << r.m << ":";
    else cout << r.m << ":";
    if (r.s < 10) cout << "0" << r.s <<endl;
    else cout << r.s << endl;
}

int main()
{
    Rellotge r = mitja_nit(); 
    for (int i = 0; i <= 25 * 60 * 60; ++i) 
    {
        escriu(r);
        incrementa(r);
    }
    return 0;
}



/*void incrementa(Rellotge& r) {
    ++r.s;
    if (r.s == 60) {
        r.s = 0;
        ++r.m;
        if (r.m == 60) {
            r.m = 0;
            ++r.h;
            if (r.h >= 24) r.h = 0;
        }
    }
}
void escriu (const Rellotge& r) {
    if (r.h < 10) cout << "0";
    cout << r.h <<":";
    if (r.m < 10) cout << "0";
    cout << r.m << ":";
    if (r.s < 10) cout << "0";
    cout << r.s << endl;
}*/
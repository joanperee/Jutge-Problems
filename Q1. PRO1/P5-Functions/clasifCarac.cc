#include <iostream>
using namespace std;

void escriu_linia(char c, string s, bool b) 
{
    cout << s << "('" << c << "') = ";
    if (b) cout << "cert" << endl;
    else cout << "fals" << endl;
}

int main()
{
    char c;
    cin >> c;
    bool b = false;
    bool vocal = false;
    bool lletra = false;
    string s;

    //LLETRA
    if ((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z'))
    {
        b = true;
        lletra = true;
        s = "lletra"; escriu_linia(c, s, b);
    }
    else
    {
        b = false;
        s = "lletra"; escriu_linia(c, s, b);
    }
    
    //VOCAL
    if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' 
    or c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U')
    {
        b = true;
        vocal = true;
        s = "vocal"; escriu_linia(c, s, b);
    }
    else 
    {
        b = false;
        s = "vocal"; escriu_linia(c, s, b);
    }
    
    //CONSONANT
    if (lletra and not vocal)
    {
        b = true;
        s = "consonant"; escriu_linia(c, s, b);
    }
    else 
    {
        b = false;
        s = "consonant"; escriu_linia(c, s, b);
    }

    //MAJUSCULA
    if (c >= 'A' and c <= 'Z')
    {
        b = true;
        s = "majuscula"; escriu_linia(c, s, b);
    }
    else 
    {
        b = false;
        s = "majuscula"; escriu_linia(c, s, b);
    }

    //MINUSCULA
    if (c >= 'a' and c <= 'z')
    {
        b = true;
        s = "minuscula"; escriu_linia(c, s, b);
    }
    else
    {
        b = false;
        s = "minuscula"; escriu_linia(c, s, b);
    }

    //DIGIT
    if (c >= '0' and c <= '9') 
    {
        b = true;
        s = "digit"; escriu_linia(c, s, b);
    }
    else
    {
        b = false;
        s = "digit"; escriu_linia(c, s, b);
    }
}
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string num;
   while (cin >> num)
   {
      int suma = 0;
      for (int i = 0; i < num.size(); ++i) 
      {
         int digit = 0;
         digit = int(num[i] - '0');
         suma += digit;
      } 
      cout << "La suma dels digits de " << num << " es " << suma << "." << endl;
   }
}
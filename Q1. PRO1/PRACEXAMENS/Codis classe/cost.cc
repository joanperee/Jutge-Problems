#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

/*
int main(int argc, char *argv[])
{
  for (int i = 0; i < argc; i++)
    cout << string(argv[i]) << endl;
}
*/

void spendTime()
{
  int x = 1;
  for (int i = 0; i < 1000; i++)
    x = 2*x%13;
}

void linear(int n)
{
  for (int i = 0; i < n; i++)
    spendTime();
}

void quadratic(int n)
{
  for (int i = 0; i < n*n; i++)
    spendTime();
}

void cubic(int n)
{
  for (int i = 0; i < n*n*n; i++)
    spendTime();
}

void exponential(int n)
{
  for (int i = 0; i < (1<<n); i++)
    spendTime();
}

void logarithmic(int n)
{
  for (long long int i = 1; i < n; i *= 2)
    spendTime();
}

int main(int argc, char *argv[] )
{
  if (argc != 3) {
    cout << "Error: parameters 'cost' and 'n' was expected" << endl;
    exit(1);
  }
  string cost(argv[1]);
  int n = atoi(argv[2]);
  if (cost == "linear")
    linear(n);
  else if (cost == "quadratic")
    quadratic(n);
  else if (cost == "cubic")
    cubic(n);
  else if (cost == "exponential")
    exponential(n);
  else if (cost == "logarithmic")
    logarithmic(n);
  else
    cout << "Error: wrong cost" << endl;
}


	

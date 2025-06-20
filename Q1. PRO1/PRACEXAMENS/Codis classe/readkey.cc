#include <iostream>
#include <cstdio>
#include <unistd.h>
#include <fcntl.h>

using namespace std;

void setNonBlock()
{
  fcntl(0, F_SETFL, fcntl(0, F_GETFL) | O_NONBLOCK);
}

char readKey()
{
  system("stty raw");
  char c = getchar();
  system("stty cooked");
  return c;
}

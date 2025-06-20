#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "readkey.cc"

/*
void printVec(vector<int> v)
{
  for (int i = 0; i < 10; i++) {
    if (i > 0) cout << ",";
    cout << v[i];
  }
  cout << endl;
}

int main()
{
  vector<int> v(10,3);
  printVec(v);
  int index, value;
  while (cin >> index >> value) {
    v[index] = value;
    printVec(v);
  }
}
*/

/*
int main()
{
  string s = "...............";
  cout << s << endl;
  int index;
  char value;
  while (cin >> index >> value) {
    s[index] = value;
    cout << s << endl;
  }
}
*/

void printVec(vector<string> v)
{
  for (int i = 0; i < 10; i++) {
    cout << v[i] << endl;
  }
  cout << endl;
}

/*
int main()
{
  vector<string> v(10, ".............");
  printVec(v);
  int index;
  string value;
  while (cin >> index >> value) {
    v[index] = value;
    printVec(v);
  }
}
*/

/*
int main()
{
  vector<string> v(10);
  v[0] = "############";
  v[1] = "#          #";
  v[2] = "#          #";
  v[3] = "#          #";
  v[4] = "#          #";
  v[5] = "#          #";
  v[6] = "#          #";
  v[7] = "#          #";
  v[8] = "#          #";
  v[9] = "############";
  printVec(v);
  int i, j;
  char c;
  while (cin >> i >> j >> c) {
    v[i][j] = c;
    printVec(v);
  }
}
*/

/*
int main()
{
  vector<string> v(10);
  v[0] = "############";
  v[1] = "#          #";
  v[2] = "#          #";
  v[3] = "#          #";
  v[4] = "#          #";
  v[5] = "#          #";
  v[6] = "#          #";
  v[7] = "#          #";
  v[8] = "#          #";
  v[9] = "############";
  printVec(v);
  int i, j;
  string s;
  while (cin >> i >> j >> s) {
    v[i] = v[i].substr(0, j) + s + v[i].substr(j+1);
    printVec(v);
  }
}
*/


/*
int main()
{
  vector<string> v(10);
  v[0] = "############";
  v[1] = "#          #";
  v[2] = "#          #";
  v[3] = "#          #";
  v[4] = "#          #";
  v[5] = "#          #";
  v[6] = "#          #";
  v[7] = "#          #";
  v[8] = "#          #";
  v[9] = "############";
  int i = 1;
  int j = 1;
  v[i][j] = 'a';
  printVec(v);
  char c;
  while (cin >> c) {
    v[i][j] = ' ';
    if (c == 'r') j++;
    else if (c == 'l') j--;
    else if (c == 'u') i--;
    else if (c == 'd') i++;
    v[i][j] = 'a';
    printVec(v);
  }
}
*/

/*
int main()
{
  vector<string> v(10);
  v[0] = "############";
  v[1] = "#      #   #";
  v[2] = "#    #   ###";
  v[3] = "#  ######  #";
  v[4] = "#   +      #";
  v[5] = "#+    ##+  #";
  v[6] = "#  ###     #";
  v[7] = "#  #     ###";
  v[8] = "#  #   +  T#";
  v[9] = "############";
  int i = 1;
  int j = 1;
  v[i][j] = 'a';
  printVec(v);
  char c;
  bool win = false;
  bool die = false;
  while (not die and not win and cin >> c) {
    v[i][j] = ' ';
    int nexti = i;
    int nextj = j;
    if (c == 'r') nextj++;
    else if (c == 'l') nextj--;
    else if (c == 'u') nexti--;
    else if (c == 'd') nexti++;
    if (v[nexti][nextj] != '#') {
      i = nexti;
      j = nextj;
    }
    if (v[i][j] == 'T')
      win = true;
    else if (v[i][j] == '+')
      die = true;
    v[i][j] = 'a';
    printVec(v);
  }
  if (win)
    cout << "Congratulations :-)" << endl;
  else
    cout << "Sorry, you lost :-(" << endl;
}
*/


int main()
{
  setNonBlock();
  vector<string> v(10);
  v[0] = "############";
  v[1] = "#      #   #";
  v[2] = "#    #   ###";
  v[3] = "#  ######  #";
  v[4] = "#   +      #";
  v[5] = "#+    ##+  #";
  v[6] = "#  ###     #";
  v[7] = "#  #     ###";
  v[8] = "#  #   +  T#";
  v[9] = "############";
  int i = 1;
  int j = 1;
  v[i][j] = 'a';
  printVec(v);
  bool win = false;
  bool die = false;
  while (not die and not win) {
    usleep(500000);
    char c = readKey();
    v[i][j] = ' ';
    int nexti = i;
    int nextj = j;
    if (c == 'r') nextj++;
    else if (c == 'l') nextj--;
    else if (c == 'u') nexti--;
    else if (c == 'd') nexti++;
    if (v[nexti][nextj] != '#') {
      i = nexti;
      j = nextj;
    }
    if (v[i+1][j] != '#') i++;
    if (v[i][j] == 'T')
      win = true;
    else if (v[i][j] == '+')
      die = true;
    v[i][j] = 'a';
    printVec(v);
  }
  if (win)
    cout << "Congratulations :-)" << endl;
  else
    cout << "Sorry, you lost :-(" << endl;
}


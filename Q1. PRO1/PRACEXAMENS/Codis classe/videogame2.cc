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

vector<vector<string> > initialise()
{
  vector<vector<string> > levels;
  {
    vector<string> v;
    v.push_back("################");
    v.push_back("#             a#");
    v.push_back("#     +    #####");
    v.push_back("#        + #");
    v.push_back("#    +  +  #");
    v.push_back("#      +  +#");
    v.push_back("#  +  +    #");
    v.push_back("#       +  #");
    v.push_back("#T   +     #");
    v.push_back("############");
    levels.push_back(v);
  }
  {
    vector<string> v;
    v.push_back("############");
    v.push_back("#a     #   #");
    v.push_back("#    #   ###");
    v.push_back("#  ######  #");
    v.push_back("#   +      #");
    v.push_back("#+    ##+  #");
    v.push_back("#  ###     #");
    v.push_back("#  #     ###");
    v.push_back("#  #   +  T#");
    v.push_back("############");
    levels.push_back(v);
  }
  return levels;
}

void move(int &i, int &j, int &jump, bool &win, bool &die, vector<string> &v)
{
  usleep(500000);
  char c = readKey();
  v[i][j] = ' ';
  int nexti = i;
  int nextj = j;
  if (c == 'r') nextj++;
  else if (c == 'l') nextj--;
  if (v[nexti][nextj] != '#') {
    i = nexti;
    j = nextj;
  }
  if (jump > 0) {
    if (v[i-1][j] != '#') i--;
    jump--;
  } else {
    if (v[i+1][j] == '#') {
      if (c == 'j') jump = 3;
    } else {
      i++;
    }
  }
  if (v[i][j] == 'T')
    win = true;
  else if (v[i][j] == '+')
    die = true;
  v[i][j] = 'a';
}

void draw(vector<string> v)
{
  for (int i = 0; i < 100; i++) cout << endl;
  for (int i = 0; i < int(v.size()); i++) {
    for (int j = 0; j < int(v[i].size()); j++) {
      char c = v[i][j];
      if (c == 'a') cout << "🐒";
      else if (c == '#') cout << "🧱";
      else if (c == '+') cout << "💀";
      else if (c == 'T') cout << "🏆";
      else if (c == ' ') cout << "  ";
    }
    cout << endl;
  }
  cout << endl;
}

void playLevel(vector<string> v, bool &win, bool &die)
{
  int i,j;
  bool found = false;
  die = false;
  win = false;
  i = 0;
  j = 0;
  while (not found) {
    if (v[i][j] == 'a') {
      found = true;
    } else {
      j++;
      if (j == int(v[i].size())) {
	i++;
	j = 0;
      }
    }
  }
  int jump = 0;
  v[i][j] = 'a';
  draw(v);
  while (not die and not win) {
    move(i, j, jump, win, die, v);
    draw(v);
  }
}

int main()
{
  setNonBlock();
  vector<vector<string> > levels = initialise();
  bool win = false;
  bool die = false;
  int ilevels = 0;
  while (not die and ilevels < int(levels.size())) {
    playLevel(levels[ilevels], win, die);
    if (win) ilevels++;
  }
  if (win)
    cout << "Congratulations :-)" << endl;
  else
    cout << "Sorry, you lost :-(" << endl;
}

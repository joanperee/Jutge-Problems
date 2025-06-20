#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Slot {
  vector<string> listsubjects;
  vector<string> listteachers;
};
struct dada {
  string assignatura;
  string professor;
  string dia;
  int horainici;
  int horafin;
};
typedef vector<vector<Slot>> TableSlots;
typedef vector<vector<int>> Matriu;

int quindiaes(string dia) {
  if (dia == "monday")
    return 0;
  else if (dia == "tuesday")
    return 1;
  else if (dia == "wednesday")
    return 2;
  else if (dia == "thursday")
    return 3;
  else
    return 4;
}

Matriu hores_classe(TableSlots &t, int horamin, int horamax) {
  Matriu M(5, vector<int>(horamax - horamin + 1, 0));
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < M[0].size(); j++) {
      M[i][j] = t[i][j + horamin].listsubjects.size();
    }
  }
  return M;
}
Matriu nombre_profes(TableSlots &t, int horamin, int horamax, int &changes) {
  Matriu M(5, vector<int>(horamax - horamin + 1, 0));
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < M[0].size(); j++) {
      if (t[i][j + horamin].listteachers.size() >= 1) {
        M[i][j]++;
        sort(t[i][j + horamin].listteachers.begin(),
             t[i][j + horamin].listteachers.end());
      }
      if (t[i][j + horamin].listteachers.size() > 1) {
        for (int k = 0; k < t[i][j + horamin].listteachers.size() - 1; k++) {
          if (t[i][j + horamin].listteachers[k] ==
              t[i][j + horamin].listteachers[k + 1]) {
            changes++;
          } else {
            M[i][j]++;
          }
        }
      }
    }
  }
  return M;
}

void print_tablas(Matriu M, int teacher, int hmin) {
  if (teacher == 0) {
    cout << "number of subjects per slot:" << endl;
  } else {
    cout << "number of teachers per slot:" << endl;
  }
  cout << " h    monday   tuesday wednesday  thursday    friday" << endl;
  for (int j = 0; j < M[0].size(); j++) {
    if (hmin + j >= 10) {
      cout << hmin + j << "         ";
    } else {
      cout << " ";
      cout << hmin + j << "         ";
    }
    for (int i = 0; i < 4; i++) {
      if (M[i][j] > 9) {
        cout << M[i][j] << "        ";
      } else {
        cout << M[i][j] << "         ";
      }
    }
    cout << M[4][j] << endl;
  }
}
int main() {
  TableSlots t(5, vector<Slot>(24));
  dada d;
  int hmax = 0, hmin = 23;
  int changes = 0;
  while (cin >> d.assignatura >> d.professor >> d.dia >> d.horainici >>
         d.horafin) {
    for (int i = d.horainici; i < d.horafin; i++) {
      t[quindiaes(d.dia)][i].listsubjects.push_back(d.assignatura);
      t[quindiaes(d.dia)][i].listteachers.push_back(d.professor);
    }
    if (d.horainici < hmin)
      hmin = d.horainici;
    if (d.horafin > hmax)
      hmax = d.horafin - 1;
  }
  Matriu res1 = hores_classe(t, hmin, hmax);
  print_tablas(res1, 0, hmin);
  Matriu res2 = nombre_profes(t, hmin, hmax, changes);
  print_tablas(res2, 1, hmin);
  cout << "number of replacements needed to avoid conflicts:" << endl;
  cout << changes << endl;
}
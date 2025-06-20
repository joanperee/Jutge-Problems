#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

typedef vector<vector<Slot> > TableSlots;

struct Slot {
    vector<string> listsubjects;
    vector<string> listteachers;
    vector<string> listdays;
    vector<int> listh1;
    vector<int> listh2;
    int counterSubjects = 0;
};

void processInput(Slot& info, int& maxHour, int& minHour) 
{
    string subject, teacher, day;
    int h1, h2;
    while (cin >> subject >> teacher >> day >> h1 >> h2) {
        info.listsubjects.push_back(subject);
        info.listteachers.push_back(teacher);
        info.listdays.push_back(day);
        info.listh1.push_back(h1);
        info.listh2.push_back(h2);
        maxHour = max(maxHour, h2);
        minHour = min(minHour, h1);
    }
}

void calculateTimetables(TableSlots& t, const Slot& info, int minHour, int maxHour) 
{
    int n = int(info.listsubjects.size());
    for (int i = 0; i < n; ++i) 
    {
        for (int h = info.listh1[i]; h < info.listh2[i]; ++h) 
        {
            int d;
            if (info.listdays[i] == "monday") d = 0;
            else if (info.listdays[i] == "tuesday") d = 1;                
            else if (info.listdays[i] == "wednesday") d = 2;                
            else if (info.listdays[i] == "thursday") d = 3;                
            else d = 4;                
            t[h][d].counterSubjects++;
            if (info.teachers[i] )
       }
    }
}

void output(const TableSlots& t, int minHour, int maxHour) {
    cout << "number of subjects per slot:\n";
    cout << " h    monday   tuesday wednesday  thursday    friday\n";
    for (int i = minHour; i < maxHour; ++i) {
        cout << setw(2) << i;
        for (int j = 0; j < 5; ++j) {
            cout << setw(10) << t[i][j].counterSubjects;
        }
        cout << "\n";
    }
    cout << "number of teachers per slot:\n";
    cout << " h    monday   tuesday wednesday  thursday    friday\n";
    for (int i = minHour; i < maxHour; ++i) {
        cout << setw(2) << i;
        for (int j = 0; j < 5; ++j) {
            cout << setw(10) << t[i][j].counterTeachers;
        }
        cout << "\n";
    }
}

int main() {
    string subject, teacher, day;
    int h1, h2, maxHour = 0, minHour = 24;
    Slot info;
    processInput(info, maxHour, minHour);                   
    TableSlots t((maxHour + 1), vector<Slot>(5));
    calculateTimetables(t, info, minHour, maxHour);
    output(t, minHour, maxHour);
}
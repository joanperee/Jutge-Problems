#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

struct Article {
    string identifier;
    string topic;
    int freq;
};

//pre: n > 0
//post: returns article vector formed by input channel data
vector<Article> initialize_art_vector(int n) {
 
}

//pre: v is non-empty
//post: write vector on output
void write_art_vector(.... v) {

}

bool comp(const string& a, const string& b) 
{
    return a < b;
}

int main() {
    int n;
    cin >> n;
    vector<Article> v = initialize_art_vector(n);
    ......
    ......
    write_art_vector(v);
}
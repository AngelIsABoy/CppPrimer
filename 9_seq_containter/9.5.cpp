#include<vector>
#include<iostream>
using namespace std;

vector<int>::iterator find(vector<int>::iterator a, vector<int>::iterator b, int m){
    vector<int>::iterator it;
    for (it = a; it != b; ++it)
        if (*it == m)
            return it;
    return it;
}

int main(){
    vector<int> s;
    int i;
    int m;
    for (i = 0; i < 100; i++){
        s.push_back(i);
    }
    vector<int>::iterator t;
    while(cin >> m){
        t = find(s.begin(), s.end(), m);
        if(t != s.end()){
            printf("%dhas been found!\n",*t);
        } else {
            printf("%d not be found!\n", m);
        }
    }
}

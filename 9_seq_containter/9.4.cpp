#include<vector>
#include<iostream>
using namespace std;

bool find(vector<int>::iterator a, vector<int>::iterator b, int m){
    for (auto it = a; it != b; ++it)
        if (*it == m)
            return true;
    return false;
}

int main(){
    vector<int> s;
    int i;
    int m;
    for (i = 0; i < 100; i++){
        s.push_back(i);
    }
    while(cin>>m)
        printf("%i\n",find(s.begin(),s.end(),m));
}

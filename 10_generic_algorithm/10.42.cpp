#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

void print_v(list<string> &words){
    for (auto it = words.begin(); it != words.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
}

bool isShorter(const string &s1, const string &s2){
    return s1.size() < s2.size();
}

void elimDups(list<string> &words){
    words.sort();
    cout<<"after sort:"<<endl;
    print_v(words);
    words.unique();
    cout<<"after unique:"<<endl;
    print_v(words);
}

int main(){
    list<string> lis;
    string m;
    cout<<"input the string with the end of 'end'."<<endl;
    cin >> m;
    while(m != "end"){
        lis.push_back(m);
        cin >> m;
    }
    cout<<"The initial status of vector:"<<endl;
    print_v(lis);
    elimDups(lis);
    lis.sort(isShorter);
    cout<<"After sort."<<endl;
    print_v(lis);
    
    return 0;
    
}

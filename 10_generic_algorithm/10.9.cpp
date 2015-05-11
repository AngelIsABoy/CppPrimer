#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print_v(vector<string> &words){
    for (auto it = words.begin(); it != words.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
}

void elimDups(vector<string> &words){
    sort(words.begin(), words.end());
    cout<<"after sort:"<<endl;
    print_v(words);
    auto end_unique = unique(words.begin(), words.end());
    cout<<"after unique:"<<endl;
    print_v(words);
    words.erase(end_unique, words.end());
    cout<<"after erase:"<<endl;
    print_v(words);
}

int main(){
    vector<string> vec;
    string m;
    cout<<"input the string with the end of 'end'."<<endl;
    cin >> m;
    while(m != "end"){
        vec.push_back(m);
        cin >> m;
    }
    cout<<"The initial status of vector:"<<endl;
    print_v(vec);
    elimDups(vec);
    return 0;
    
}

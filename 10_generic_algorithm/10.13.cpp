#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool isBigger5(const string &s){
    return s.size() >= 5;
}

int main(){
    vector<string> vec;
    string s;
    cout<<"Input the sting with the end of 'end'."<<endl;
    cin >> s;
    while(s != "end"){
        vec.push_back(s);
        cin >> s;       
    }
    auto end_5 = partition(vec.begin(), vec.end(), isBigger5);
    for (auto it = vec.begin(); it != end_5; it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    return 0;
}


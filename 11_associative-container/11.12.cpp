#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int main(){
    vector<pair<string, int>> ve;
    pair<string, int> pa;
    string s; 
    int i;
    cout<<"Please input <s,i>."<<endl;
    while(cin>>s>>i){
       // pa.first = s;
       // pa.second = i;
       //  ve.push_back(pa);
        ve.push_back(make_pair(s, i));
    }
    for (auto const &v: ve)
        cout<<v.first<<" "<<v.second<<" ";
    cout<<endl;
}

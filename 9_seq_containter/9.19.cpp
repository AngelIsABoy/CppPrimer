#include<list>
#include<iostream>
using namespace std;

int main(){
    int n;
    string m;
    list<string> de;
    cout<<"Please input the number of string."<<endl;
    cin >> n;
    while(n--){
        cin>>m;
        de.push_back(m);
    }
    for (auto it = de.begin(); it!= de.end();it++){
        cout<<*it<<endl;
    }
    return 0;
}

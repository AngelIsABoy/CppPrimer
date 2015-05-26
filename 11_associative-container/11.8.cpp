#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<string> vec;
    string s;
    cout<<"Please input word."<<endl;
    while(cin >> s) {
        if(find(vec.begin(), vec.end(),s) == vec.end()){
            vec.push_back(s);
            cout<<"new word!"<<endl;
        } else {
            cout<<"already exists."<<endl;
        }
    }
}

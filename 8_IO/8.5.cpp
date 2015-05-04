#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main(){
    vector<string> a;
    ifstream in("test.txt");
    string word;
    while(in >> word){
        a.push_back(word);
    };
    // vector<string>::iterator it;
    for(auto it = a.begin(); it != a.end(); ++it){
        cout<<*it<<endl;
    }
}

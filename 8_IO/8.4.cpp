#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main(){
    vector<string> a;
    ifstream in("test.txt");
    string line;
    while(getline(in, line)){
        a.push_back(line);
    };
    // vector<string>::iterator it;
    for(auto it = a.begin(); it != a.end(); ++it){
        cout<<*it<<endl;
    }
}

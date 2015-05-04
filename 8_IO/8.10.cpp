#include<iostream>
#include<sstream>
#include<fstream>
#include<vector>
using namespace std;

int main(){
    vector<string> s;
    fstream in("test.txt");
    string line;
    string word;
    while(getline(in,line)){
        s.push_back(line);
    }
    for (auto it = s.begin(); it != s.end(); ++it){
        istringstream record(*it);
        while(record >> word) {
            cout<<word<<endl;
        }
    }
}

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
    istringstream record;
    while(getline(in,line)){
        s.push_back(line);
    }
    for (auto it = s.begin(); it != s.end(); ++it){
        record.str(*it);
        while(record >> word) {
            cout<<word<<endl;
        }
    }
}

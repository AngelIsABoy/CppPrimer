#include<sstream>
#include<iostream>
using namespace std;

istream& stream1(istream& stream){
    string line;
    string word;
    while(getline(stream, line)){
        istringstream record(line);   //bing the line
        while(record >> word){
            cout<<word<<endl;
        };
    };
    stream.clear();
}

int main(){
    stream1(cin);
    cout<<"This is the end of program."<<endl;
}


#include<iostream>
using namespace std;

istream& stream1(istream& stream){
    string word;
    while(stream >> word){
        cout<<word<<endl;
    };
    stream.clear();
}

int main(){
    stream1(cin);
    cout<<"This is the end of program."<<endl;
}

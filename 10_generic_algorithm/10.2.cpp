#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main(){
    list<string> ve;
    int N;
    string M;
    string i;
    cout<<"Please input the number of string and the string you want to count."<<endl;
    cin>>N>>M;
    while(N--){
        cin >> i;
        ve.push_back(i);
    }
    cout<<"The number of "<<M<<" is:"<<count(ve.cbegin(), ve.cend(), M)<<endl;
}

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> ve;
    int N, M;
    int i;
    cout<<"Please input the number of int and the number you want to count."<<endl;
    cin>>N>>M;
    while(N--){
        cin >> i;
        ve.push_back(i);
    }
    cout<<"The number of "<<M<<" is:"<<count(ve.cbegin(), ve.cend(), M)<<endl;
}

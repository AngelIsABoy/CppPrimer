#include<vector>
#include<iostream>
using namespace std;

#define N 10

int main(){
    vector<int> vec;
    int n = N;
    while(n--){
        vec.push_back(n);
    }
    cout<<"The initial status of the vector."<<endl;
    for (auto it = vec.cbegin(); it != vec.cend(); it++)
        cout<<*it<<" ";
    cout<<endl;

    fill_n(vec.begin(), vec.size(), 0);
    
    cout<<"After using fill_n with 0:"<<endl;
    for(auto it = vec.cbegin(); it != vec.cend(); it++)
        cout<<*it<<" ";
    cout<<endl;  
}

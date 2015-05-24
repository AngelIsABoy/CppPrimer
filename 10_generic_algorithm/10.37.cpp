#include<iostream>
#include<vector>
#include<list>
using namespace std;

int main(){
    vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    list<int> lis;
    for ( auto it = vec.rbegin()+3; it != vec.rbegin()+8; it++){
        lis.push_back(*it);
    }
    for (auto it = lis.begin(); it != lis.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
}

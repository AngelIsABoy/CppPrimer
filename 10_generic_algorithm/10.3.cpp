#include<vector>
#include<iostream>
#include<numeric>
using namespace std;

int main(){
    vector<int> ve;
    int N;
    int i;
    int sum;
    cout<<"Please input the number of vector"<<endl;
    cin >> N;
    cout<<"Please input the element of the vector."<<endl;
    while(N--){
        cin >> i;
        ve.push_back(i);
    }
    sum = accumulate(ve.cbegin(), ve.cend(), 0);
    cout<<"The sum of the vector is: "<<sum<<endl;
}

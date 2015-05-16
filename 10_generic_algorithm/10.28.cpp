#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;

void print_v(list<int> vec){
    for (auto it = vec.begin(); it != vec.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    list<int> vec,vec1,vec2,vec3;
    int i = 1;
    while(i != 10){
        vec.push_back(i);
        i++;
    }
    cout<<"the element in vec: "<<endl;
    print_v(vec);
    copy(vec.cbegin(), vec.cend(), inserter(vec1, vec1.begin()));
    copy(vec.cbegin(), vec.cend(), front_inserter(vec2));
    copy(vec.cbegin(), vec.cend(), back_inserter(vec3));
    cout<<"the element in vec1: "<<endl;
    print_v(vec1);
    cout<<"the element in vec2: "<<endl;
    print_v(vec2);
    cout<<"the element in vec3: "<<endl;
    print_v(vec3);
    return 0;
}

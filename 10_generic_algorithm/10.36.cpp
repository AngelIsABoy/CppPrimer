#include<iostream>
#include<list>
#include<algorithm>
#include<string>
using namespace std;

int main(){
    list<int> li = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto rzero = find(li.crbegin(), li.crend(), 0);
cout<<*rzero<<endl;
}

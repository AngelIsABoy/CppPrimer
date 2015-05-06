#include<list>
#include<deque>
#include<iostream>
using namespace std;

int main(){
    list<int>  li;
    deque<int> de1, de2;
    int i = 0;
    for (i = 0; i < 100; i++)
        li.push_back(i);
    for (auto it= li.begin(); it != li.end(); it++){
        if(*it % 2 == 0)
            de1.push_back(*it);
        else
            de2.push_back(*it);
    }

    for (auto it = de1.begin(); it != de1.end(); it++)
        printf("The element of de1 is: %d\n", *it);

    for (auto it = de2.begin(); it != de2.end(); it++)
        printf("The element of de2 is: %d\n", *it);
}

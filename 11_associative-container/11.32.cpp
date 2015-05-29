#include<map>
#include<iostream>
using namespace std;

int main(){
    multimap<string, string> auwo;
    string author;
    string work;
    cout<<"Please input the author and his/her work."<<endl;
    while(cin>>author>>work){
        auwo.insert({author, work});
    }
    auto map_it = auwo.cbegin();
    while (map_it != auwo.cend()){
        cout<<"author:"<<map_it->first<<" work:"<<map_it->second<<endl;
        map_it++;
    }
}

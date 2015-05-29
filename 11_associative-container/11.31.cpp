#include<map>
#include<iostream>
using namespace std;

int main(){
    multimap<string, string> auwo;
    string author;
    string work;
    cout<<"add author and his/her work with the end of 'end'."<<endl;
    while(cin>>author){
        if(author=="end") break;
        cin>>work;
        auwo.insert({author, work});
    }
    //display
    auto map_it = auwo.cbegin();
    while (map_it != auwo.cend()) {
        cout<<"author:"<<map_it->first<<" work:"<<map_it->second<<endl;
        map_it++;
    }
    cout<<"Please input a key to erase it."<<endl;
    string to_erase;
    cin >> to_erase;
    auwo.erase(to_erase);
    map_it = auwo.cbegin();
    while(map_it != auwo.cend()){
        cout<<"author:"<<map_it->first<<" work:"<<map_it->second<<endl;
        map_it++;
    }
}

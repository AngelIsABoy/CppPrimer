#include<map>
#include<iostream>
using namespace std;

int main(){
    map<string, size_t> word_count;
    string word;
    while(cin >> word) {
        auto ret = word_count.insert({word,1});
        if (!ret.second)
            ++ret.first->second;
    }
    
    //display
    auto map_it = word_count.cbegin();
    while (map_it != word_count.cend()) {
        cout << map_it -> first << " occurs "
              << map_it -> second << " times" << endl;
        ++map_it;
    }
}

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
using namespace std:: placeholders;

void print_v(vector<string> &words){
    for (auto it = words.begin(); it != words.end(); it++)
        cout<<*it<<" ";
    cout<<endl;
}

string make_plural(size_t ctr, const string &word, const string &ending){
    return (ctr > 1) ? word + ending : word;
}

//bool isShorter(const string &s1, const string &s2){
//    return s1.size() < s2.size();
//}

void elimDups(vector<string> &words){
    sort(words.begin(), words.end());
   // cout<<"after sort:"<<endl;
   // print_v(words);
    auto end_unique = unique(words.begin(), words.end());
   // cout<<"after unique:"<<endl;
   // print_v(words);
    words.erase(end_unique, words.end());
  //  cout<<"after erase:"<<endl;
  //  print_v(words);
}

bool check_size(const string &s, string::size_type sz){
    return s.size() < sz;
}

void biggies(vector<string> &words, 
             vector<string>::size_type sz){
    elimDups(words);
    stable_sort(words.begin(), words.end(),
                [](const string &a, const string &b)
                   { return a.size() < b.size(); });
   // cout<<"after stable_sort"<<endl;
   // print_v(words);
    auto beg_big = partition(words.begin(), words.end(),bind(check_size, _1, sz));
 //   auto wc = find_if(words.begin(), words.end(), 
   //                   [sz](const string &a)
     //                   { return a.size() >= sz; });
    auto count = words.end()-beg_big;
    cout << count << " " << make_plural(count, "word", "s")
         << " of length " << sz << " or longer " << endl;
    for_each(beg_big,words.end(),
             [](const string &s){cout << s << " ";});
    cout<<endl;
}

int main(){
    vector<string> vec;
    string m;
    vector<string>::size_type sz;
    cout<<"input the size of the word."<<endl;
    cin >> sz;
    cout<<"input the string with the end of 'end'."<<endl;
    cin >> m;
    while(m != "end"){
        vec.push_back(m);
        cin >> m;
    }
    cout<<"The initial status of vector:"<<endl;
    print_v(vec);
    biggies(vec, sz);
    //print_v(vec);
    
    return 0;
    
}

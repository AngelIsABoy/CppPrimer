#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
void print_v(vector<string> &words){
    for (auto it = words.begin(); it != words.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
void print_l(list<string> &words){
    for (auto it = words.begin(); it!= words.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main(){
    vector<string> vec;
    list<string> lis;
    string s;
    cout<<"input the string with the end of 'end'"<<endl;
    cin >> s;
  //  while(s != "end"){
    //    vec.push_back(s);
    //    cin >> s;                           
  //  }
//    print_v(vec);
//    unique_copy(vec.begin(), vec.end(), lis.begin());
 //   print_v(vec);
  //  print_l(lis);
    return 0;

}

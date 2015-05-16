#include<iostream>
#include<vector>
#include<fstream>
#include<algorithm>
#include<iterator>
using namespace std;

int main(){
    ifstream in("test.txt");
    istream_iterator<string> in_iter(in);
    istream_iterator<string> int_eof;
    ostream_iterator<string> out_iter(cout, " ");
    vector<string> vec;
    while(in_iter != int_eof){
        vec.push_back(*in_iter++);
    }
    copy(vec.begin(), vec.end(), out_iter);
    cout<<endl;
}

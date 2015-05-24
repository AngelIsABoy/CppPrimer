#include<iostream>
#include<fstream>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;

void odd_even(string fin, string fout1, string fout2){
    ifstream in(fin);
    istream_iterator<int> str_in(in);
    istream_iterator<int> eof;
    ofstream out1(fout1);
    ofstream out2(fout2);
    ostream_iterator<int> str_out1(out1, " ");
    ostream_iterator<int> str_out2(out2, "\n");
    while(str_in != eof){
        if (*str_in % 2 != 0) 
            *str_out1++ = *str_in++;
        else
            *str_out2++ = *str_in++;
    }
    
}

int main(){
    odd_even("10.33.txt","10.33.1.txt","10.33.2.txt") ;   
    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

void fcn(size_t v1){
    auto f = [v1] () mutable -> bool {
                                      if (v1 == 0)
                                          return 0;
                                      else
                                          while(v1 > 0){
                                              v1--;
                                              cout<<v1<<endl;
                                          }
                                      }; 
    auto j = f();
    cout<<"j = "<<j<<endl;
}

int main(){
    size_t v1=0;
    cout<<"input the v1 with int."<<endl;
    cin >> v1;
    fcn(v1);
    return 0;
    
}

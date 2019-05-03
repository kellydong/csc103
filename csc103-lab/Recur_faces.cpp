#include <iostream>
using std::cin;
using std::cout;

void f(int m, int n){
    if(n<=0 || m<=0) return;
    f(n-1,m);
    for(size_t i=0; i<n; i++){
        cout<<"0_0";
    }
    cout<<"\n";
    for(size_t i=0; i<m; i++){
        cout<<"-_-";
    }
    cout<<"\n";
    f(n,m-1);
}

int main(){
    f(2,2);
    return 0;
}
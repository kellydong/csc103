#include <iostream>
using std::cin;
using std::cout;

/*void*/ int base2(int n){
    if(/*n < 2*/ n==0)
        return 0;
        //cout << n << "\n";
    else {
        return (n%2 + 10 * base2(n/2));
        /*
        base2(n/2);
        base2(n%2);
        */
    }
}

int main(){
    int x;
    cin >> x;
    cout << base2(x);
    cout << "\n";
    return 0;
}
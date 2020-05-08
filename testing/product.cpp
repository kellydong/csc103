#include<iostream>
using namespace std;
int main()
{
    int product = 1;
    int x;
    while(cin>>x)
    {
        product *= x;
    }
    cout << product << endl;
}

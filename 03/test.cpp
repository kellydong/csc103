#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int x;
    int product=1;
    while(cin >> x)
    {
        product = product * x;
    }
    cout<<product<<endl;
}
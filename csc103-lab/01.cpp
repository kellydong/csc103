#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int sum = 0;
    int number;
    cout << "Give me a number: ";
    cin >> number;
    for (int i=1;i <= number; i++)
    {
        sum = sum + i * i;
    }
    cout << "Sum: " << sum << "\n";
    return 0;
}

/* Another way:
#include <iostream>
using std::cin;
using std::cout;

int main()
{
    int sum = 0;
    int number;
    cout << "Give me a number: ";
    cin >> number;
    while(number > 0)
    {
        sum += number*number;
        number--;
    }
    cout << "Sum: " << sum << "\n";
    return 0;
*/

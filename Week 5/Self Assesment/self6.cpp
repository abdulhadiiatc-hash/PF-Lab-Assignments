#include <iostream>
using namespace std;
main()
{
    int num = 0, sum = 0;
    while (num >= 0)
    {
        sum = num + sum;
        cout << "Enter a number or negative number to exit: ";
        cin >> num;
    }
    cout << "The Sum is " << sum;
}
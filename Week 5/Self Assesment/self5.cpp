#include <iostream>
using namespace std;
main()
{
    int num, sum = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter a number: ";
        cin >> num;
        sum = num + sum;
    }
    cout << "The Sum is " << sum;
}
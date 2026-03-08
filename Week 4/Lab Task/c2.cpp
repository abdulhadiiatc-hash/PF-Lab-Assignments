#include <iostream>
using namespace std;
main()
{
    int num1, num2;
    cout << "Please enter the number: ";
    cin >> num1;
    cout << "Please enter the 2nd number: ";
    cin >> num2;
    if (num1 < num2)
    {
        cout << "Number " << num2 << " is greater then " << num1;
    }
    else
    {
        cout << "Number " << num1 << " is greater then " << num2;
    }
}
#include <iostream>
using namespace std;
int add(int num1, int num2);
main()
{
    cout << "Enter the 1st Number: ";
    int number1;
    cin >> number1;
    cout << "Enter the 2nd Number: ";
    int number2;
    cin >> number2;

    int sum = add(number1, number2);
    cout << "The sum of 2 numbers is "<< sum;
    return sum;
}

int add(int num1, int num2)
{
    int sum = num1 + num2;
    return sum;
}

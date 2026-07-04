#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number1, number2;
    cout << "Enter the base number: ";
    cin >> number1;
    cout << "Enter the exponent number: ";
    cin >> number2;
    cout << "The " << number1 << " raised to the power of " << number2 << " is " << pow(number1, number2);
    return 0;
}
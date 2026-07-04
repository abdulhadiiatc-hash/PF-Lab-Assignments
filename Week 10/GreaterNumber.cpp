#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int number1, number2;
    cout << "Enter 1st number: ";
    cin >> number1;
    cout << "Enter 2nd number: ";
    cin >> number2;
    cout << "Greater number is " << max(number1, number2);
    return 0;
}
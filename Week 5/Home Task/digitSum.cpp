#include <iostream>
using namespace std;
int main()
{
    int number, sum = 0, mod;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = number; i > 0; i = number)
    {
        mod = number % 10;
        sum = sum + mod;
        number = number / 10;
    }
    cout << "Sum of Digits: " << sum;
}
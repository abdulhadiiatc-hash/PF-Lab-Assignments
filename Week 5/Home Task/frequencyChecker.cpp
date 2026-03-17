#include <iostream>
using namespace std;
int main()
{
    int number, digit, modulus, frequency = 0;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit to check: ";
    cin >> digit;
    while (number > 0)
    {
        modulus = number % 10;
        number = number / 10;
        if (modulus == digit)
        {
            frequency = frequency + 1;
        }
    }
    cout << "Frequency: " << frequency;
}
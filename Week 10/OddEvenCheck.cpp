#include <iostream>
using namespace std;

void checkEvenOdd(int);
int main()
{
    int number;
    cout << "Enter number: ";
    cin >> number;

    checkEvenOdd(number);
    return 0;
}

void checkEvenOdd(int number)
{
    int sum = 0, digit;
    for (int i = 0; i < 5; i++)
    {
        digit = number % 10;
        number = number / 10;
        sum = sum + digit;
    }
    if (sum % 2 == 0)
    {
        cout << "Evenish";
    }
    else
    {
        cout << "Oddish";
    }
}
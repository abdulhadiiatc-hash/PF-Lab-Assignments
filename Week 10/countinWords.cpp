#include <iostream>
using namespace std;

void numbertoWord(int);

int main()
{
    int number;
    cout << "Enter the number: ";
    cin >> number;

    numbertoWord(number);

    return 0;
}

void numbertoWord(int number)
{
    int tens, ones;
    string ten, one;

    if (number == 1)
    {
        cout << "One";
    }
    if (number == 2)
    {
        cout << "Two";
    }
    if (number == 3)
    {
        cout << "Three";
    }
    if (number == 4)
    {
        cout << "Four";
    }
    if (number == 5)
    {
        cout << "Five";
    }
    if (number == 6)
    {
        cout << "Six";
    }
    if (number == 7)
    {
        cout << "Seven";
    }
    if (number == 8)
    {
        cout << "Eight";
    }
    if (number == 9)
    {
        cout << "Nine";
    }
    if (number == 10)
    {
        cout << "Ten";
    }
    if (number == 11)
    {
        cout << "Eleven";
    }
    if (number == 12)
    {
        cout << "Twelve";
    }
    if (number == 13)
    {
        cout << "Thirteen";
    }
    if (number == 14)
    {
        cout << "Fourteen";
    }
    if (number == 15)
    {
        cout << "Fifteen";
    }
    if (number == 16)
    {
        cout << "Sixteen";
    }
    if (number == 17)
    {
        cout << "Seventeen";
    }
    if (number == 18)
    {
        cout << "Eighteen";
    }
    if (number == 19)
    {
        cout << "Ninteen";
    }
    if (number >= 20)
    {
        tens = number / 10;
        ones = number % 10;
        if (tens == 2)
        {
            ten = "Twenty";
        }
        if (tens == 3)
        {
            ten = "Thirty";
        }
        if (tens == 4)
        {
            ten = "Forty";
        }
        if (tens == 5)
        {
            ten = "Fifty";
        }
        if (tens == 6)
        {
            ten = "Sixty";
        }
        if (tens == 7)
        {
            ten = "Seventy";
        }
        if (tens == 8)
        {
            ten = "Eighty";
        }
        if (tens == 9)
        {
            ten = "Ninty";
        }
        if (ones == 1)
        {
            one = "One";
        }
        if (ones == 2)
        {
            one = "Two";
        }
        if (ones == 3)
        {
            one = "Three";
        }
        if (ones == 4)
        {
            one = "Four";
        }
        if (ones == 5)
        {
            one = "Five";
        }
        if (ones == 6)
        {
            one = "Six";
        }
        if (ones == 7)
        {
            one = "Seven";
        }
        if (ones == 8)
        {
            one = "Eight";
        }
        if (ones == 9)
        {
            one = "Nine";
        }
        cout << ten << one;
    }
    if (number == 100)
    {
        cout << "One Hundred";
    }
}
#include <iostream>
using namespace std;
main()
{
    int number, tens, ones;
    string ten, one;
    cout<<"Enter the number: ";
    cin>>number;
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
            ten = "twenty";
        }
        if (tens == 3)
        {
            ten = "thirty";
        }
        if (tens == 4)
        {
            ten = "forty";
        }
        if (tens == 5)
        {
            ten = "fifty";
        }
        if (tens == 6)
        {
            ten = "sixty";
        }
        if (tens == 7)
        {
            ten = "sixty";
        }
        if (tens == 8)
        {
            ten = "eighty";
        }
        if (tens == 9)
        {
            ten = "Ninty";
        }
        if (ones == 1)
        {
            one = "one";
        }
        if (ones == 2)
        {
            one = "two";
        }
        if (ones == 3)
        {
            one = "three";
        }
        if (ones == 4)
        {
            one = "four";
        }
        if (ones == 5)
        {
            one = "five";
        }
        if (ones == 6)
        {
            one = "six";
        }
        if (ones == 7)
        {
            one = "seven";
        }
        if (ones == 8)
        {
            one = "eight";
        }
        if (ones == 9)
        {
            one = "nine";
        }
        cout << ten << " " << one;
    }
}
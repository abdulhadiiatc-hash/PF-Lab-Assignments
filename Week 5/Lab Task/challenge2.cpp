#include <iostream>
using namespace std;
int main()
{
    int number, digit, count = 0;
    cout << "Enter number: ";
    cin >> number;
    cout << "Enter digit: ";
    cin >> digit;
    for(int x=number; x>0;x=number)
    {
        if (number % 10 == digit)
        {
            count = count + 1;
        }
        number = number / 10;
    }
    cout << "Frequency of the Digit: " << count;
}

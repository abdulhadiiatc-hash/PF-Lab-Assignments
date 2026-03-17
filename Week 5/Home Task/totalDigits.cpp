#include <iostream>
using namespace std;
int main()
{
    int number, digits = 0;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = number; i > 0; i = i / 10)
    {
        digits = digits + 1;
    }
    cout << "Total number of digits: " << digits;
}
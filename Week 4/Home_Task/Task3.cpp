#include <iostream>
using namespace std;
main()
{
    int temp1, temp2, difference;
    cout << "Temperature of 1st city: ";
    cin >> temp1;
    cout << "Temperature of 2nd city: ";
    cin >> temp2;
    difference = temp1 - temp2;
    if (difference > 10)
    {
        cout << "The difference is too big";
    }
    else
    {
        cout << "Program Ends";
    }
}
#include <iostream>
using namespace std;
main()
{
    string name1, name2, name3;
    int age1, age2, age3;
    cout << "Enter the name of the 1st Brother: ";
    cin >> name1;
    cout << "Enter the age of the 1st Brother: ";
    cin >> age1;
    cout << "Enter the name of the 2nd Brother: ";
    cin >> name2;
    cout << "Enter the age of the 2nd Brother: ";
    cin >> age2;
    cout << "Enter the name of the 3rd Brother: ";
    cin >> name3;
    cout << "Enter the age of the 3rd Brother: ";
    cin >> age3;

    if (age1 < age2)
    {
        if (age1 < age3)
        {
            cout << name1 << " is youngest";
        }
    }
    if (age2 < age3)
    {
        if (age2 < age1)
        {
            cout << name2 << " is youngest";
        }
    }
    if (age3 < age1)
    {
        if (age3 < age2)
        {
            cout << name3 << " is youngest";
        }
    }
}
#include <iostream>
using namespace std;
int main()
{
    int inheritance, yearslivedinpast, moneyspent = 12000, age = 18 - 1;
    cout << "Enter Money: ";
    cin >> inheritance;
    cout << "Enter Year: ";
    cin >> yearslivedinpast;
    for (int year = 1800; year <= yearslivedinpast; year = year + 2)
    {
        inheritance = inheritance - moneyspent;
    }
    for (int year = 1801; year <= yearslivedinpast; year = year + 2)
    {
        age = age + 2;
        inheritance = inheritance - (moneyspent + 50 * age);
    }
    if (inheritance >= 0)
    {
        cout << "Yes! He will live a care free life and will have " << inheritance << " dollars left";
    }
    else
    {
        cout << "He will need " << inheritance * (-1) << " dollars to survive";
    }
}
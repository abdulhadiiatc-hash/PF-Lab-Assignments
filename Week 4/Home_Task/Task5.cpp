#include <iostream>
using namespace std;
main()
{
    int workdays, holidays, difference, playtime, hours, minutes;
    cout << "Enter Holidays: ";
    cin >> holidays;
    workdays = 365 - holidays;
    playtime = (workdays * 63) + (holidays * 127);
    difference = 30000 - playtime;
    hours = difference / 60;
    minutes = difference % 60;
    if (playtime > 30000)
    {
        difference = (-1) * difference;
        hours = difference / 60;
        minutes = difference % 60;
        cout << "Tom sleeps well" << endl;
        cout << hours << " hours and " << minutes << " minutes for play";
    }
    if (playtime < 30000)
    {
        cout << "Tom sleeps well" << endl;
        cout << hours << " hours and " << minutes << " minutes less for play";
    }
}
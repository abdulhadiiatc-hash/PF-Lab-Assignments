#include <iostream>
using namespace std;

int timeTravel(int &, int &);

int main()
{
    int hours, minutes;

    cout << "Enter hours: ";
    cin >> hours;
    cout << "Enter minutes: ";
    cin >> minutes;
    
    timeTravel(hours, minutes);
    
    cout << hours << " : " << minutes;
    return 0;
}

int timeTravel(int &hours, int &minute)
{
    minute = minute + 15;
    if (minute > 59)
    {
        minute = minute - 60;
        hours++;
    }
    if (hours > 23)
    {
        hours = hours - 24;
    }
}
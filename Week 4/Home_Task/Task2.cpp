#include <iostream>
using namespace std;
main()
{
    int speed;
    cout << "Enter the speed: ";
    cin >> speed;
    if (speed <= 100)
    {
        cout << "Perfect! You are going good";
    }
    if (speed > 100)
    {
        cout << "Halt!.... You will be challaned";
    }
}
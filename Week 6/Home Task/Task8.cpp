#include <iostream>
using namespace std;
int main()
{
    string flightNumber[4] = {"PK101", "PK202", "PK303", "PK404"};
    string destination[4] = {"Karachi", "Lahore", "Islamabad", "Quetta"};
    int seatsAvailable[4] = {10, 3, 50, 4};

    cout << "=== Flight Info ===" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << "Flight: " << flightNumber[i] << " | Destination: " << destination[i] << " | Seats: " << seatsAvailable[i] << endl;
    }

    cout << "\n=== Flights with less than 5 seats ===" << endl;
    for (int i = 0; i < 4; i++)
    {
        if (seatsAvailable[i] < 5)
            cout << flightNumber[i] << " to " << destination[i] << " (" << seatsAvailable[i] << " seats left)" << endl;
    }
}
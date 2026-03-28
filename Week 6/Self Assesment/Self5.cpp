#include <iostream>
using namespace std;
int main()
{
    string pastatypes[5] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int pastas_sold[5];
    int total = 0, highest = 0, lowest = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number of " << pastatypes[i] << " pastas sold: ";
        cin >> pastas_sold[i];
        while (pastas_sold[i] < 0)
        {
            cout << "Invalid input! Enter again: ";
            cin >> pastas_sold[i];
        }
    }

    for (int i = 1; i < 5; i++)
    {
        if (pastas_sold[i] > pastas_sold[highest])
            highest = i;
        if (pastas_sold[i] < pastas_sold[lowest])
            lowest = i;
    }

    for (int i = 0; i < 5; i++)
        total = total + pastas_sold[i];

    cout << "\n=== Report ===\n";
    for (int i = 0; i < 5; i++)
    {
        cout << pastatypes[i] << " Pasta: " << pastas_sold[i] << " sold" << endl;
    }
    cout << "\nTotal Sales: " << total << endl;
    cout << "Highest Selling: " << pastatypes[highest] << endl;
    cout << "Lowest Selling: " << pastatypes[lowest] << endl;
}

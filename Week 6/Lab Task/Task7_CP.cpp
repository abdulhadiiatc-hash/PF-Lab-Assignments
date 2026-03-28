#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "How many resistors? ";
    cin >> n;
    float resistors[n];
    float total = 0;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter resistance: ";
        cin >> resistors[i];
        total = total + resistors[i];
    }
    cout << "Total Resistance: " << total << " ohms" << endl;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "How many numbers do you want to enter? ";
    cin >> n;
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> nums[i];
    }
    cout << "\nNumbers Entered: " << endl;
    for (int i = 0; i < n; i++)
        cout << nums[i] << endl;
}
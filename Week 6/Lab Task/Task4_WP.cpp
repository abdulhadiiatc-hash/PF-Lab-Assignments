#include <iostream>
using namespace std;
int main()
{
    int nums[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter number: ";
        cin >> nums[i];
    }
    cout << "1st element: " << nums[0] << endl;
    cout << "Last element: " << nums[4] << endl;
}
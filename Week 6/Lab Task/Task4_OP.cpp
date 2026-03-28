#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "How many numbers? ";
    cin >> n;
    int nums[100];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter number: ";
        cin >> nums[i];
    }
    cout << "Reversed: ";
    for (int i = n - 1; i >= 0; i--)
        cout << nums[i] << " ";
    cout << endl;
}
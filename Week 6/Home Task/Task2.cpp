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
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 == 0)
            count++;
    }
    cout << "Even numbers count: " << count << endl;
}
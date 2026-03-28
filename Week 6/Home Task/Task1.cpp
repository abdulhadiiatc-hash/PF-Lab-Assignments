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
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum = sum + nums[i];
    cout << "Sum: " << sum << endl;
}
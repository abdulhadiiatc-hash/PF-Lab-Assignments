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
    int largest = nums[0];
    int smallest = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (nums[i] > largest)
            largest = nums[i];
        if (nums[i] < smallest)
            smallest = nums[i];
    }
    cout << "Largest: " << largest << endl;
    cout << "Smallest: " << smallest << endl;
}
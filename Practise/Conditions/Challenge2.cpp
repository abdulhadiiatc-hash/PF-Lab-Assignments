#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter array size: ";
    cin >> size;
    int nums[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter numbers: ";
        cin >> nums[i];
    }
    int target;
    cout << "Enter Target Element: ";
    cin >> target;
    for (int i = 0; i < size; i++)
    {
        for (int j = 1; j < size; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                
            }
        }
        cout << "[" << i << "][" << j << "]";
    }
}
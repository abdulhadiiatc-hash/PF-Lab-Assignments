#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "How many numbers? ";
    cin >> n;
    int nums[n];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cout << "Enter number: ";
        cin >> num;
        bool duplicate = false;
        for (int j = 0; j < count; j++)
        {
            if (nums[j] == num)
                duplicate = true;
        }
        if (duplicate)
            cout << "Already Entered!" << endl;
        else
        {
            nums[count] = num;
            count++;
        }
    }
}
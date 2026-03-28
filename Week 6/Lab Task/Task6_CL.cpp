#include <iostream>
using namespace std;
int main()
{
    int nums[5] = {1, 2, 3, 4, 5};
    int sum = 0;
    for (int i = 0; i < 5; i++)
        sum = sum + nums[i];
    float avg = sum / 5.0;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << avg << endl;
}
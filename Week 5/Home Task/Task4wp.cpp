#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    for (int num = 1; num <= 5; num++)
    {
        sum = sum + num;
    }
    cout << "Sum of 1st 5 Natural Numbers: " << sum;
}
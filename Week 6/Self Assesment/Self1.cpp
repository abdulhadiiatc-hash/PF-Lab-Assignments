#include <iostream>
using namespace std;
int main()
{
    int size = 5;
    int number[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " number : ";
        cin >> number[i];
    }
    int largest = number[0];
    for (int i = 0; i < size; i++)
    {
        if (number[i] > largest) 
        {
            largest = number[i];
        }
    }
    cout << "The largest number is :" << largest;
}
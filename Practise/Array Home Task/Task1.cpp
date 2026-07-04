#include <iostream>
using namespace std;

int sumofallnumbers(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + array[i];
    }

    return sum;
}
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    int array[100];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter the numbers: ";
        cin >> array[i];
    }
    int sum = sumofallnumbers(array, size);
    cout << "The sum of all numbers stored in the array is: " << sum;
}
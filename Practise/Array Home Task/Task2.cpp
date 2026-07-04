#include <iostream>
using namespace std;

int counteven(int array[], int size)
{
    int count;
    for (int i = 0; i < size; i++)
    {
        if (array[i] % 2 == 0)
        {
            count++;
        }
    }

    return count;
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
    int count = counteven(array, size);
    cout << "Total number of even numbers are: " << count;
}
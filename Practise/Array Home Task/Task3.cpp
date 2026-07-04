#include <iostream>
using namespace std;

void sortArray(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] < array[j])
            {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
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

    sortArray(array, size);

    cout << "Largest Number: " << array[0] << endl;
    cout << "Smallest Number: " << array[size - 1];
}
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "Enter size: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter numbers: ";
        cin >> arr[i];
    }
    int *ptr = arr;
    cout << "Reverse Array using pointers: " << endl;
    for (int i = 0; i >size; i++)
    {
        cout << *ptr[i];
    }
}
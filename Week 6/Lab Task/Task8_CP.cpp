#include <iostream>
using namespace std;
int main()
{
    int arr1[2];
    cout << "Enter 2 elements for first array: " << endl;
    cin >> arr1[0];
    cin >> arr1[1];

    int n;
    cout << "How many elements in second array? ";
    cin >> n;
    int arr2[100];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> arr2[i];
    }

    int result[102];
    result[0] = arr1[0];
    for (int i = 0; i < n; i++)
        result[i + 1] = arr2[i];
    result[n + 1] = arr1[1];

    cout << "Result: ";
    for (int i = 0; i < n + 2; i++)
        cout << result[i] << " ";
    cout << endl;
}
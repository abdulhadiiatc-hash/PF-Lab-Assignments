#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element: ";
        cin >> arr[i];
    }
    bool special = true;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0 && arr[i] % 2 != 0)
            special = false;
        if (i % 2 != 0 && arr[i] % 2 == 0)
            special = false;
    }
    if (special)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}
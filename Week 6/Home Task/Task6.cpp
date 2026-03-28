#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "How many students? ";
    cin >> n;
    string names[100];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name: ";
        cin >> names[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (names[j] > names[j + 1])
            {
                string temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
    cout << "\nAlphabetical Order:" << endl;
    for (int i = 0; i < n; i++)
        cout << names[i] << endl;
}
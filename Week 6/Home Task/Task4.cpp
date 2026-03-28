#include <iostream>
using namespace std;
int main()
{
    string names[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter student name: ";
        cin >> names[i];
    }
    cout << "\nStudent Names:" << endl;
    for (int i = 0; i < 5; i++)
        cout << names[i] << endl;
}
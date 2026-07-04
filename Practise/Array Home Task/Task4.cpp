#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter number of students: ";
    cin >> size;
    cin.ignore();
    string names[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter student's name: ";
        getline(cin, names[i]);
    }
    cout << "Students names are: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << names[i] << endl;
    }
}
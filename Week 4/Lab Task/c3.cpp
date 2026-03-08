#include <iostream>
using namespace std;
main()
{
    string name1, name2;
    cout << "Enter the 1st Name: ";
    cin >> name1;
    cout << "Enter the 2nd Name: ";
    cin >> name2;
    if (name1 == name2)
    {
        cout << "Yes, the words are same";
    }
    else
    {
        cout << "no, the words are different";
    }
}
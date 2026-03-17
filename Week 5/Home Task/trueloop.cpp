#include <iostream>
using namespace std;
int main()
{
    int choice;
    while (true)
    {
        cout << "\n====Menu====" << endl;
        cout << "1. Say Hello" << endl;
        cout << "2. Say GoodBye" << endl;
        cout << "3. Exit" << endl;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Hello! Welcome to the Program" << endl;
        }
        else if (choice == 2)
        {
            cout << "Goodbye! Have a Nice Day" << endl;
        }
        else if (choice == 3)
        {
            cout << "Program Ended" << endl;
            break;
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
    }
    return 0;
}
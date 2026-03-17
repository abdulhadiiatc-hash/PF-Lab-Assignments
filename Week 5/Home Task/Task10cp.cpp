#include <iostream>
using namespace std;
int main()
{
    int option;
    while (true)
    {
        cout << "----Restourant Management System----" << endl;
        cout << "1. View Food Menu" << endl;
        cout << "2. Place Order" << endl;
        cout << "3. View Order Status" << endl;
        cout << "4. Generate Bill" << endl;
        cout << "5. Contact Staff" << endl;
        cout << "6. Exit" << endl;
        cout << "Please Select an option(1-6)" << endl;
        cin >> option;
        if (option == 1)
        {
            cout << "You Selected: View Food Menu" << endl;
        }
        else if (option == 2)
        {
            cout << "You Selected: Place Order" << endl;
        }
        else if (option == 3)
        {
            cout << "You Selected: View Order Status" << endl;
        }
        else if (option == 4)
        {
            cout << "You Selected: Generate Bill" << endl;
        }
        else if (option == 5)
        {
            cout << "You Selected: Contact Staff" << endl;
        }
        else if (option == 6)
        {
            cout << "Exiting Restourant Management System. Thank You!" << endl;
            break;
        }
        else
        {
            cout << "Invalid Choice. Try Again!" << endl;
        }
    }
    return 0;
}
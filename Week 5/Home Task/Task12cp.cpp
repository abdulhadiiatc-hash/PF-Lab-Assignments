#include <iostream>
using namespace std;
int main()
{
    int choice;
    string book;
    while (true)
    {
        cout << "1. Add Book" << endl;
        cout << "2. View Book" << endl;
        cout << "3. Borrow Book" << endl;
        cout << "4. Issue Book" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your Choice(1-5): ";
        cin >> choice;
        if (choice == 1)
        {
            cout << "Enter your Book: ";
            cin >> book;
            cout << "You added a Book: " << book << endl;
        }
        else if (choice == 2)
        {
            cout << "Book in Inventory: " << book << endl;
        }
        else if (choice == 3)
        {
            cout << "You Choose: Borrow Book" << endl;
        }
        else if (choice == 4)
        {
            cout << "You Choose : Issue Book" << endl;
        }
        else if (choice == 5)
        {
            cout << "Exiting Library System. GoodBye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
    }
}
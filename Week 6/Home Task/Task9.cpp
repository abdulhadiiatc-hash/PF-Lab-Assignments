#include <iostream>
using namespace std;
int main()
{
    string books[100];
    string borrowed[100];
    int book_count = 0;
    int borrow_count = 0;
    int choice;

    while (true)
    {
        cout << "\n--- Library Menu ---" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. View Books" << endl;
        cout << "3. Borrow Book" << endl;
        cout << "4. View Borrowed Books" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            cout << "Enter book name: ";
            cin >> books[book_count];
            book_count++;
        }
        else if (choice == 2)
        {
            if (book_count == 0)
                cout << "No books available." << endl;
            else
            {
                for (int i = 0; i < book_count; i++)
                    cout << i + 1 << ". " << books[i] << endl;
            }
        }
        else if (choice == 3)
        {
            cout << "Enter book name to borrow: ";
            cin >> borrowed[borrow_count];
            borrow_count++;
        }
        else if (choice == 4)
        {
            if (borrow_count == 0)
                cout << "No borrowed books." << endl;
            else
            {
                for (int i = 0; i < borrow_count; i++)
                    cout << i + 1 << ". " << borrowed[i] << endl;
            }
        }
        else if (choice == 5)
        {
            cout << "Goodbye!" << endl;
            break;
        }
        else
            cout << "Invalid choice!" << endl;
    }
}
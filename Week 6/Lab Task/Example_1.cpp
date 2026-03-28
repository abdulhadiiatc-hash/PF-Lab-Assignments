#include <iostream>
using namespace std;
int main()
{
    int correctPIN = 1234;
    int pin[3];
    int choice;
    int balance = 1000;
    int amount;
    bool login = false;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter ATM PIN: ";
        cin >> pin[i];
        if (pin[i] == correctPIN)
        {
            login = true;
            cout << "Login Successful" << endl;
            break;
        }
        else
            cout << "Incorrect PIN" << endl;
    }

    if (login == true)
    {
        while (true)
        {
            cout << "\n--- ATM Menu ---" << endl;
            cout << "1. Check Balance" << endl;
            cout << "2. Deposit Money" << endl;
            cout << "3. Withdraw Money" << endl;
            cout << "4. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            if (choice == 1)
            {
                cout << "Current Balance: " << balance << endl;
            }
            else if (choice == 2)
            {
                cout << "Enter amount to deposit: ";
                cin >> amount;
                balance = balance + amount;
                cout << "Updated Balance: " << balance << endl;
            }
            else if (choice == 3)
            {
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount <= balance && amount > 0)
                {
                    balance = balance - amount;
                    cout << "Remaining Balance: " << balance << endl;
                }
                else
                    cout << "Insufficient Balance" << endl;
            }
            else if (choice == 4)
            {
                cout << "Thank you for using ATM" << endl;
                break;
            }
            else
                cout << "Invalid Choice" << endl;
        }
    }
    else
        cout << "Too many incorrect attempts. Access Denied." << endl;
}
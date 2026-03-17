#include <iostream>
using namespace std;
int main()
{
    int pin = 1234, balance = 1000, deposit, withdrawl, option;
    for (int login = 1; login <= 3; login++)
    {
        cout << "Enter your PIN: ";
        cin >> pin;
        if (pin == 1234)
        {
            cout << "Login Successfull\n"
                 << endl;
            break;
        }
        else if (login == 3 && !(pin == 1234))
        {
            cout << "Too many failed attempts. Card Blocked!";
            return 0;
        }
    }
    for (int i = 1; i <= 10; i++)
    {
        cout << "----ATM Menu----" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit\n"
             << endl;
        cout << "Choose any option: ";
        cin >> option;
        if (option == 1)
        {
            cout << "Current Balance: " << balance << "\n"
                 << endl;
        }
        else if (option == 2)
        {
            cout << "Enter Amount to Deposit: ";
            cin >> deposit;
            balance = balance + deposit;
            cout << "Money deposited successfully\n"
                 << endl;
        }
        else if (option == 3)
        {
            cout << "Enter Amount to Withdraw: ";
            cin >> withdrawl;
            
            if (balance >= withdrawl)
            {
                balance = balance - withdrawl;
                cout << "Money withdrawn successfully\n"<< endl;
            }
            else if (balance < withdrawl)
            {
                balance = balance - withdrawl;
                cout << "Insuficient Balance\n"<<endl;
            }
        }
        else if (option == 4)
        {
            cout << "Thank You for using the ATM" << endl;
            break;
        }
    }

    return 0;
}
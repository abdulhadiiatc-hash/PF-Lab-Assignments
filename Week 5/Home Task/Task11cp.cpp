#include <iostream>
using namespace std;
int main()
{
    int n1, option, sum, minus, product;
    float n2, divide;
    while (true)
    {
        cout << "--- Simple Calculator ---" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Clear Screen" << endl;
        cout << "6. Exit" << endl;
        cin >> option;
        if (option == 1)
        {
            cout << "Enter the number: ";
            cin >> n1;
            cout << "Enter the number: ";
            cin >> n2;
            sum = n1 + n2;
            cout << "Result: " << sum<<endl;
        }
        else if (option == 2)
        {
            cout << "Enter the number: ";
            cin >> n1;
            cout << "Enter the number: ";
            cin >> n2;
            minus = n1 - n2;
            cout << "Result: " << minus<<endl;
        }
        else if (option == 3)
        {
            cout << "Enter the number: ";
            cin >> n1;
            cout << "Enter the number: ";
            cin >> n2;
            product = n1 * n2;
            cout << "Result: " << product<<endl;
        }
        else if (option == 4)
        {
            cout << "Enter the number: ";
            cin >> n1;
            cout << "Enter the number: ";
            cin >> n2;
            divide = n1 / n2;
            cout << "Result: " << divide<<endl;
        }
        else if (option == 5)
        {
            cout << "Screen Cleared" << endl;
        }
        else if (option == 6)
        {
            cout << "Exiting Calculator. GoodBye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
    }
}

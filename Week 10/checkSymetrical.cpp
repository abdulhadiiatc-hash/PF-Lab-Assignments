#include <iostream>
using namespace std;

void checkSymetrical(int);

int main()
{
    int number;
    cout << "Enter a 3 digit number: ";
    cin >> number;

    checkSymetrical(number);

    return 0;
}
void checkSymetrical(int number)
{
    int first, last;
    first = number / 100;
    last = number % 10;
    if (first == last)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}
#include <iostream>
using namespace std;
int main()
{
    int table, multiple;
    cout << "Enter a number: ";
    cin >> table;
    for (int number = 1; number <= 10; number++)
    {
        multiple = table * number;
        cout << table << " x " << number << " = " << multiple << endl;
    }
}
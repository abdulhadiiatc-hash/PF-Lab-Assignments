#include <iostream>
using namespace std;
int main()
{
    int change[4];
    float bill;
    cout << "Enter quarters, dimes, nickels, pennies: ";
    cin >> change[0];
    cin >> change[1];
    cin >> change[2];
    cin >> change[3];
    cout << "Enter bill amount: ";
    cin >> bill;
    float total = change[0] * 0.25 + change[1] * 0.10 + change[2] * 0.05 + change[3] * 0.01;
    if (total >= bill)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}
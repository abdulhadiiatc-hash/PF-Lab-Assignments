#include <iostream>
using namespace std;
main()
{
    int bill, discount, discountedbill;
    cout << "Enter your bill: ";
    cin >> bill;
    if (bill <= 5000)
    {
        discount = bill * 0.05;
        discountedbill = bill - discount;
        cout << "Your discounted bill: " << discountedbill;
    }
    else
    {
        discount = bill * 0.10;
        discountedbill = bill - discount;
        cout << "Your discounted bill: " << discountedbill;
    }
}
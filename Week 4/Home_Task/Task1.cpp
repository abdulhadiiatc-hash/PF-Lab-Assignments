#include <iostream>
using namespace std;
main()
{
    string countryname;
    float price, discount;
    cout << "Enter Country Name: ";
    cin >> countryname;
    cout << "Enter Ticket Price: ";
    cin >> price;
    if (countryname == "Ireland")
    {
        discount = price - (price * 0.10);
        cout << "Discounted Price: " << discount;
    }
    else
    {
        discount = price - (price * 0.05);
        cout << "Discounted Price: " << discount;
    }
}
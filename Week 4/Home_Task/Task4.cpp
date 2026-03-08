#include <iostream>
using namespace std;
main()
{
    float redrose, whiterose, tulips, total;
    float redrose_price = 2.00, whiterose_price = 4.10, tulips_price = 2.50;
    cout << "Enter the amount of Red roses: ";
    cin >> redrose;
    cout << "Enter the amount of White roses: ";
    cin >> whiterose;
    cout << "Enter the amount of tulips: ";
    cin >> tulips;
    total = (redrose * redrose_price) + (whiterose * whiterose_price) + (tulips * tulips_price);
    if (total > 200)
    {
        float discount, discountedamount;
        discount = total * 0.2;
        discountedamount = total - discount;
        cout << "Original Price: " << total << "$" << endl;
        cout << "Price after discount: " << discountedamount << "$";
    }
    else
    {
        cout << "Price: " << total << "$";
    }
}
#include <iostream>
using namespace std;
int main()
{
    int age, toycost, washingmachinecost, giftmoney = 10, totalmoney = 0, toysreceive = 0, total_sale, savings;
    int moneyleft_afterpurchase, insuficient_amount;
    cout << "Entert Lily's Age: ";
    cin >> age;
    cout << "Enter the price of the Washing Machine: ";
    cin >> washingmachinecost;
    cout << "Enter the Unit Price of each Toy: ";
    cin >> toycost;
    for (int year = 1; year <= age; year = year + 2)
    {
        toysreceive = toysreceive + 1;
    }
    for (int year = 2; year <= age; year = year + 2)
    {
        totalmoney = totalmoney + (giftmoney - 1);
        giftmoney = giftmoney + 10;
    }
    total_sale = toysreceive * toycost;
    savings = totalmoney + total_sale;
    if (savings >= washingmachinecost)
    {
        moneyleft_afterpurchase = savings - washingmachinecost;
        cout << "Yes!" << endl;
        cout << moneyleft_afterpurchase;
    }
    else if (savings < washingmachinecost)
    {
        insuficient_amount = washingmachinecost - savings;
        cout << "No!" << endl;
        cout << insuficient_amount;
    }
}
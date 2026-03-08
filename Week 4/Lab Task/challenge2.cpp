#include <iostream>
using namespace std;
main()
{
    int laptop_price = 50000, salary = 10000, monthreq, advance, month6;
    advance = salary * 0.5;
    monthreq = laptop_price / advance;
    month6 = advance * 6;
    cout << "The 50% advance salary of 6 months is " << month6 << endl;
    cout << "Months required to buy the laptop : " << monthreq;
}
#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    while (num >= 0)
    {
        cout << "Enter a number or negative value to exit: ";
        cin >> num;
        if(num<0){
            continue;
        }
        sum = sum + num;
    }
    cout << "Sum of the numbers is: " << sum;
}
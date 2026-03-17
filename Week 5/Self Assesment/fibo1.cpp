#include <iostream>
using namespace std;
main()
{
    int num1 = 0, num2 = 1, next;
    cout << num1 << ", " << num2 << ", ";
    for (int x = 0; x <= 50; x++)
    {
        next = num1 + num2;
        cout << next << ", ";
        num1 = num2;
        num2 = next;
    }
}

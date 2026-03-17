#include <iostream>
using namespace std;
int main()
{
    int n1 = 0, n2 = 1, n, next;
    cout << "Enter the length of the Fibonacci Series: ";
    cin >> n;
    cout << n1 << ", ";
    cout << n2;
    for (int i = 1; i < n - 1; i++)
    {
        next = n1 + n2;
        cout << ", " << next;
        n1 = n2;
        n2 = next;
    }
}
#include <iostream>
using namespace std;
int main()
{
    int n1, n2, i, gcd, lcm, mod1, mod2;
    cout << "Enter the 1st number: ";
    cin >> n1;
    cout << "Enter the 2nd number: ";
    cin >> n2;
    if (n1 > n2)
    {
        i = n2;
    }
    else if (n2 > n1)
    {
        i = n1;
    }
    while (i > 0)
    {
        i--;
        mod1 = n1 % i;
        mod2 = n2 % i;
        if (mod1 == 0 && mod2 == 0)
        {
            gcd = i;
            break;
        }
    }
    cout << "GCD: " << gcd << endl;
    lcm = (n1 * n2) / gcd;
    cout << "LCM: " << lcm;
}

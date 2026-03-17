#include <iostream>
using namespace std;
int main()
{
    int n1, n2, lcm, mod1, mod2, hcf;
    cout << "Enter the 1st Number: ";
    cin >> n1;
    cout << "Enter the 2nd Number: ";
    cin >> n2;
    if (n1 > n2)
    {
        hcf = n2;
    }
    else
    {
        hcf = n1;
    }

    while (hcf > 0)
    {
        hcf--;
        mod1 = n1 % hcf;
        mod2 = n2 % hcf;
        if (mod1 == 0 && mod2 == 0)
        {
            break;
        }
    }
    cout << "GCD/HCF of " << n1 << " & " << n2 << " is: " << hcf << endl;
    lcm = (n1 * n2) / hcf;
    cout << "LCM of " << n1 << " & " << n2 << " is: " << lcm;
}
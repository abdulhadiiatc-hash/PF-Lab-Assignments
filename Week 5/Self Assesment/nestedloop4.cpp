#include <iostream>
using namespace std;
main()
{
    int n = 1;
    while (n < 10)
    {
        if (n == 5)
        {
            n = n + 1;
            continue;
        }
        cout << "n = " << n << endl;
        n = n + 1;
    }
}

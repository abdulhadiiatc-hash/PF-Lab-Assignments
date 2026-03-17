#include <iostream>
using namespace std;
main()
{
    int i = 0;
    while (i < 10)
    {
        cout << i << endl;
        i = i + 1;
        if (i == 4)
        {
            break;
        }
    }
}

#include <iostream>
using namespace std;
main()
{
    for (int i = 1; i <= 10; i = i + 1)
    {
        for (int j = 1; j <= i; j = j + 1)
        {
            cout << " " << j;
        }
        cout << endl;
    }
}
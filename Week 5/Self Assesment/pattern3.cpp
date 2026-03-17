#include <iostream>
using namespace std;
main()
{
    int extar = 1;
    for (int rows = 10; rows >= 1; rows--)
    {
        for (int space = 1; space <=rows; space++)
        {
            cout << " ";
        }

        for (int cols = 1; cols <= extar; cols++)
        {
            cout << "*";
        }
        extar++;
        cout << endl;
    }
}

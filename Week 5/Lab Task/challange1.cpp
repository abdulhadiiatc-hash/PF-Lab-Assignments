#include <iostream>
using namespace std;
main()
{
    int multiple;
    cout << endl << "Multiplication Table of 24:"<<endl;
    for (int i = 1; i <= 10; i++)
    {
        int table = 24;
        multiple = table * i;
        cout << table << " x " << i << " = " << multiple << endl;
    }
    cout << endl << "Multiplication Table of 50:"<<endl;
    for (int i = 1; i <= 10; i++)
    {
        int table = 50;
        multiple = table * i;
        cout << table << " x " << i << " = " << multiple << endl;
    }
    cout << endl << "Multiplication Table of 29:"<<endl;
    for (int i = 1; i <= 10; i++)
    {
        int table = 29;
        multiple = table * i;
        cout << table << " x " << i << " = " << multiple << endl;
    }
    cout << endl;
}
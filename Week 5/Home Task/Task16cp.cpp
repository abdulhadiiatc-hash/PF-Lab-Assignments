#include <iostream>
using namespace std;
int main()
{
    int rows;
    cout<<"Enter No. of Rows: ";
    cin>>rows;
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << j;
        }
        cout << "\n";
    }
}
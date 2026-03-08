#include <iostream>
using namespace std;
int main()
{
    char going;
    cout << "Are your friends going? (Press Y for Yes): ";
    cin >> going;

    if (going == 'Y')
    {
        cout << "You are also going!";
    }
    else
    {
        cout << "You are not going!";
    }
}
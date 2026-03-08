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
    if(going=='N'){
        cout<<"You are not going!";
    }
}
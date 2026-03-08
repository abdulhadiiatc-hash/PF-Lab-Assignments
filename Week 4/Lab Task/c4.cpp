#include <iostream>
using namespace std;
main()
{
    string password = "NEW@1234", enterpass;
    cout << "Enter Password: ";
    cin >> enterpass;
    if (enterpass == password)
    {
        cout << "Wow! You have cracked the code!";
    }
    else
    {
        cout << "It is not that simple, try again";
    }
}
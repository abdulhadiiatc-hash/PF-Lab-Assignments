#include <iostream>
using namespace std;

void checkcase(char);

int main()
{
    char letter;
    cout << "Enter a character(A/a): ";
    cin >> letter;

    checkcase(letter);
    return 0;
}

void checkcase(char letter)
{
    if (letter == 'A')
    {
        cout << "You have entered capital A";
    }
    else
    {
        cout << "You have entered small a";
    }
}
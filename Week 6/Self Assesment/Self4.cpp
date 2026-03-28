#include <iostream>
using namespace std;
int main()
{
    string word;
    char letter = 'n';
    int letters = 0;
    cout << "Enter a word: ";
    cin >> word;
    bool isFound = false;
    while (word[letters] != '\0')
    {
        if (word[letters] == letter)
        {
            isFound = true;
        }
        letters++;
    }
    if (isFound == true)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
}
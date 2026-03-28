#include <iostream>
using namespace std;
int main()
{
    string word;
    char letter;
    bool isFound = false;
    cout << "Enter a word: ";
    cin >> word;
    cout << "Enter letter to search: ";
    cin >> letter;
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == letter)
        {
            isFound = true;
            break;
        }
    }
    if (isFound == true)
        cout << letter << " is present in the word: " << word << endl;
    else
        cout << letter << " is NOT present in the word: " << word << endl;
}
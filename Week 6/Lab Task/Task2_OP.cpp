#include <iostream>
using namespace std;
int main()
{
    string word;
    cout << "Enter a word: ";
    cin >> word;
    int count = 0;
    for (int i = 0; word[i] != '\0'; i++)
        count++;
    cout << "Reversed: ";
    for (int i = count - 1; i >= 0; i--)
        cout << word[i];
    cout << endl;
}
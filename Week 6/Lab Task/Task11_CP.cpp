#include <iostream>
using namespace std;
int main()
{
    string sentence;
    cout << "Enter a string: ";
    getline(cin, sentence);
    cout << "Output: ";
    for (int i = 0; sentence[i] != '\0'; i++)
    {
        char c = sentence[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U')
            cout << c;
    }
    cout << endl;
}
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "How many customers? ";
    cin >> n;
    string names[100];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter name: ";
        cin >> names[i];
    }
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (names[i][0] == letter)
            count++;
    }
    cout << "Names starting with " << letter << ": " << count << endl;
}
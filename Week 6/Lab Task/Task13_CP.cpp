#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "How many chords? ";
    cin >> n;
    string chords[100];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter chord: ";
        cin >> chords[i];
    }
    cout << "Jazzified: ";
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; chords[i][j] != '\0'; j++)
            count++;
        if (chords[i][count - 1] != '7')
            chords[i] = chords[i] + "7";
        cout << chords[i] << " ";
    }
    cout << endl;
}
#include <iostream>
using namespace std;

int main()
{
    string word;
    cout << "Enter a String: ";
    cin >> word;

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] == 122)      
            word[i] = 97;        
        else if (word[i] == 90)  
            word[i] = 65;        
        else
            word[i] = word[i] + 1;
    }

    cout << "Shifted String: " << word << endl;
}
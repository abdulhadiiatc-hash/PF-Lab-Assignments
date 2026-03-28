#include<iostream>
using namespace std;
int main()
{
    int size = 5, discountprice;
    float ticket = 500;
    string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};
    string input;
    bool is_even = false;
    cout << "Enter the Movie Name: ";
    cin >> input;
    for (int i = 0; i < size; i++)
    {
        if (input == movies[i] && i % 2 == 0) // check even index
        {
            is_even = true;
        }
    }
    if (is_even)
    {
        discountprice = ticket - (ticket * 0.10);
    }
    else
    {
        discountprice = ticket - (ticket * 0.05);
    }
    cout << "Movie Name: " << input << endl;
    cout << "Price: " << discountprice;
}
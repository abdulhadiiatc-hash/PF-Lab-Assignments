#include <iostream>
using namespace std;
int main()
{
    int n, number;
        cout << "Enter the Number of Integers(n): ";
    cin >> n;
    float p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
    float perc1, perc2, perc3, perc4, perc5;
    for (int i = n; i > 0; i--)
    {
        cout<<"Enter a number: ";
        cin >> number;
        if (number < 200)
        {
            p1++;
        }
        else if (number >= 200 && number < 400)
        {
            p2++;
        }
        else if (number >= 400 && number < 600)
        {
            p3++;
        }
        else if (number >= 600 && number < 800)
        {
            p4++;
        }
        else if (number >= 800 && number <= 1000)
        {
            p5++;
        }
        perc1 = (p1 / n) * 100.0;
        perc2 = (p2 / n) * 100.0;
        perc3 = (p3 / n) * 100.0;
        perc4 = (p4 / n) * 100.0;
        perc5 = (p5 / n) * 100.0;
    }
    cout << perc1 << "%" << endl;
    cout << perc2 << "%" << endl;
    cout << perc3 << "%" << endl;
    cout << perc4 << "%" << endl;
    cout << perc5 << "%" << endl;
}
#include <iostream>
using namespace std;
int main()
{
    int y = 0;
    int &ref = y;
    cout << "Original Value of y: " << y << endl;
    ref = 30;
    cout << "Modified value of y: " << y << endl;
}
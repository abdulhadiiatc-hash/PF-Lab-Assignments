#include <iostream>
using namespace std;

void printCars(int carData[][5], int rowSize);

int main()
{
    const int rowSize = 5;
    const int colSize = 5;

    int carData[rowSize][colSize] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1},
    };

    printCars(carData, rowSize);
}

void printCars(int carData[][5], int rowSize)
{
    int sum = 0;
    for (int col = 0; col < rowSize; col++)
    {
        sum = sum + carData[2][col];
    }
    cout << "Total Nissan Cars: " << sum;
}
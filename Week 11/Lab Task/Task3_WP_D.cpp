#include <iostream>
using namespace std;

void printCars(int carData[][5], int rowSize, string color);

int main()
{
    string color;
    cout << "Enter the Color: ";
    cin >> color;
    const int rowSize = 5;
    const int colSize = 5;

    int carData[rowSize][colSize] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1},
    };

    printCars(carData, rowSize, color);
}

void printCars(int carData[][5], int rowSize, string color)
{
    int sum = 0;
    if (color == "Red")
    {
        for (int row = 0; row < rowSize; row++)
        {
            sum = sum + carData[row][0];
        }
    }
    else if (color == "Black")
    {
        for (int row = 0; row < rowSize; row++)
        {
            sum = sum + carData[row][1];
        }
    }
    else if (color == "Brown")
    {
        for (int row = 0; row < rowSize; row++)
        {
            sum = sum + carData[row][2];
        }
    }
    else if (color == "Blue")
    {
        for (int row = 0; row < rowSize; row++)
        {
            sum = sum + carData[row][3];
        }
    }
    else if (color == "Gray")
    {
        for (int row = 0; row < rowSize; row++)
        {
            sum = sum + carData[row][4];
        }
    }
    else
    {
        cout << "No stock for the color: " << color;
    }

    cout << "Total Cars Avaiable of the Color " << color << " are " << sum;
}

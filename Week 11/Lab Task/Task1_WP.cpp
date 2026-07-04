#include <iostream>
using namespace std;

void printCars(int carData[][5], int rowSize);

int main()
{
    string arr[5]={"Red","Black","Browm","Blue","Gray"};
    const int rowSize = 5;
    const int colSize = 5;

    int carData[rowSize][colSize] = {
        {10, 7, 12, 10, 4},
        {18, 11, 15, 17, 2},
        {23, 19, 12, 16, 14},
        {7, 12, 16, 0, 2},
        {3, 5, 6, 2, 1},
    };
    for(int i=0; i<5;i++){
        cout<<"\t"<<arr[i];
    }
    cout<<endl;
    printCars(carData, rowSize);
}

void printCars(int carData[][5], int rowSize)
{
    for (int row = 0; row < rowSize; row++)
    {
        if (row == 0)
        {
            cout << "Suzuki\t";
        }
        else if (row == 1)
        {
            cout << "Toyota\t";
        }
        else if (row == 2)
        {
            cout << "Nissan\t";
        }
        else if (row == 3)
        {
            cout << "BMW\t";
        }
        else if (row == 4)
        {
            cout << "Audi\t";
        }

        for (int col = 0; col < 5; col++)
        {
            cout << carData[row][col] << "\t";
        }
        cout << endl;
    }
}

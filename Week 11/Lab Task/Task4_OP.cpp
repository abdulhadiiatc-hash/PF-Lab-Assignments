#include <iostream>
using namespace std;

void printSum(int matrix[][3], int rowSize);

int main()
{
    int rowSize, colSize = 3;
    cout << "Enter Row Size: ";
    cin >> rowSize;
    int matrix[rowSize][3];
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            cout << "Enter the elements of the Matrix: " << "[" << row << "][" << col << "]";
            cin >> matrix[row][col];
        }
    }
    printSum(matrix, rowSize);
}
void printSum(int matrix[][3], int rowSize)
{
    int sum = 0;
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            sum = sum + matrix[row][col];
        }
    }
    cout << "The sum of the matrix is " << sum;
}
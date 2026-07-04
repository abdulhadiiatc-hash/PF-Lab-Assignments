#include <iostream>
using namespace std;

void checkIdentity(int matrix[][3], int rowSize);

int main()
{
    int rowSize = 3, colSize = 3;

    int matrix[rowSize][3];
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            cout << "Enter the elements of the Matrix: " << "[" << row << "][" << col << "] : ";
            cin >> matrix[row][col];
        }
    }

    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            cout << matrix[row][col] << "  ";
        }
        cout << endl;
    }
    checkIdentity(matrix, rowSize);
}

void checkIdentity(int matrix[][3], int rowSize)
{
    bool isIdentity = true;
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            if (row == col)
            {
                if (matrix[row][col] != 1)
                {
                    isIdentity = false;
                }
            }
            if (row != col)
            {
                if (matrix[row][col] !=0)
                {
                    isIdentity = false;
                }
            }
        }
    }
    if (isIdentity == true)
    {
        cout << "The Matrix is an Identity Matrix";
    }
    else
    {
        cout << "The Matrix is not an Identity Matrix";
    }
}
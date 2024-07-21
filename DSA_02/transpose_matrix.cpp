#include <iostream>
using namespace std;

void Transpose(int arr[][3], int row, int col, int transpose[][3])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transpose[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < col; i++)  // Loop over columns
    {
        for (int j = 0; j < row; j++)  // Loop over rows
        {
            cout << transpose[i][j] << " ";  // Print transposed matrix
        }
        cout << endl;
    }
}

int main()
{
    int arr[3][3];
    int row = 3;
    int col = 3;
    int transpose[3][3];
    
    cout << "Enter elements of the matrix:" << endl;
    
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    Transpose(arr, row, col, transpose);
    
    return 0;
}

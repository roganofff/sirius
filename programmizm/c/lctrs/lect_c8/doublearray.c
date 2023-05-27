#include <stdio.h>

int sumOdd(int row, int col, int arr[row][col])
{
    int s = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] % 2 == 1) s += arr[i][j];
        }
    }

    return s;
}

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", arr[i][j]);
        }
    }
    
    printf("%d\n", sumOdd(row, col, arr));

    return 0;
}
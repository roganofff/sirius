#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }   

    int minSum, indMin = 0, maxSum, indMax = 0;
    for (int i = 0; i < row; i++)
    {
        minSum += arr[i][0];
        maxSum += arr[i][0];
    }
    
    for (int j = 1; j < col; j++)
    {
        int curSum = 0;
        for (int i = 0; i < row; i++)
        {
            curSum += arr[i][j];
        }
        if (minSum > curSum)
        {
            minSum = curSum;
            indMin = j;
        } else if (maxSum < curSum)
        {
            maxSum = curSum;
            indMax = j;
        }
    }

    int buf[row];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            buf[i] = arr[i][indMin];
            arr[i][indMin] = arr[i][indMax];
            arr[i][indMax] = buf[i];
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
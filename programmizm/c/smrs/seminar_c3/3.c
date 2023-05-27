#include <stdio.h>

int matrixMax(int row, int col, int arr[row][col])
{
    int maxNum = *arr;
    for (int *ptr = arr; ptr < arr + row * col - 1; ptr++)
    {
        if (*ptr > maxNum) maxNum = *ptr;
    }
    
    return maxNum;
}

int main()
{
    int arr[3][2] = {{1, 0}, {3, 3}, {7, 2}};
    printf("%d\n", matrixMax(3, 2, arr));

    return 0;
}
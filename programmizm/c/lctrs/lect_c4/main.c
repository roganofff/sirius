#include <stdio.h>
#include <string.h>

void printDoubleArray(int rows, int cols, char array[rows][cols])
{
    for(int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            printf("%c ", array[r][c]);
        }   
        printf("\n");
    }
}

void fillArray(int size, char array[size][size])
{
    for(int r = 0; r < size; r++)
    {
        for (int c = 0; c < size; c++)
        {
            array[r][c] = ' ';
        }
    }
}

void snowFlake(int size, char array[size][size])
{
    for (int i = 0; i < size; i++)
    {
        array[i][size / 2] = '*';
        array[size / 2][i] = '*';
        array[i][i] = '*';
        array[i][size - 1 - i] = '*';
    }
    
}

int main()
{
    int n;
    scanf("%d", &n);
    char arr[n][n];
    fillArray(n, arr);
    snowFlake(n, arr);
    printDoubleArray(n, n, arr);

    return 0;
}
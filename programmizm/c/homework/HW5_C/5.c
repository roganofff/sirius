#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col); // получаем на вход размеры матрицы
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]); // заполняем матрицу
        }
    }   

    int minSum, indMin = 0, maxSum, indMax = 0; // изначально индексы мин и макс, а также суммы от первого столбца
    for (int i = 0; i < row; i++) // тут ищем по столбцам минимальную и максимальную сумыы
    {
        minSum += arr[i][0];
        maxSum += arr[i][0];
    }
    
    for (int j = 1; j < col; j++) // во внешнем цикле отсчитываем столбцы
    {
        int curSum = 0; // сумма текущего столбца
        for (int i = 0; i < row; i++) // считаем строки одного столбца
        {
            curSum += arr[i][j];
        }
        if (minSum > curSum) // сравниваем с уже имеющимися мин и макс, меняем индекс если надо
        {
            minSum = curSum;
            indMin = j;
        } else if (maxSum < curSum)
        {
            maxSum = curSum;
            indMax = j;
        }
    }

    int buf[row]; // буфер, чтобы поменять местами столбцы
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            buf[i] = arr[i][indMin];
            arr[i][indMin] = arr[i][indMax];
            arr[i][indMax] = buf[i];
            printf("%d ", arr[i][j]); // можем паралелльно замене выводить матрицу
        }
        printf("\n");
    }
    
    return 0;
}
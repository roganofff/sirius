#include <stdio.h>

void append(int *arr, int *size, int *capacity, int value)
{
    if (*size == *capacity)
    {
        int *ptr = realloc(arr, *capacity * 4 * 2);
        if (ptr == NULL) exit(0);
        *capacity *= 2;
    }
    arr[*size] = value;
    *size += 1;
}

void pop(int *arr, int *size, int *capacity, int index)
{
    for (int  i = index; i < *size; i++)
    {
        arr[i] = arr[i + 1];
    }
    *size -= 1;
    if (*size * 2 == *capacity)
    {
        int *ptr = realloc(arr, *size * 4);
        *capacity = *size;
    }
}

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int *arr = malloc(4);
    int size = 0, capacity = 1;
    for (int i = 2; i < 9; i++)
    {
        append(arr, &size, &capacity, i);
    }
    pop(arr, &size, &capacity, 0);
    printArray(arr, size);
    printf("size:\t\t%d\ncapacity:\t%d\n", size, capacity);

    return 0;
}
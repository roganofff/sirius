#include <stdio.h>

void print(int arr[], int n)
{
    for (int i = 0, *ptr = arr; i < n; ptr++, i++)
    {
        printf("%d ", *ptr);
    }
    printf("\n");
}

int main()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 5};
    
    print(arr, n);

    return 0;
}
#include <stdio.h>

void switchHalves(int arr[], int n)
{
    int buf, l = n / 2;
    for (int k = 0; k < l; k++)
    {
        buf = arr[k];
        arr[k] = arr[l + k];
        arr[l + k] = buf;
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    switchHalves(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
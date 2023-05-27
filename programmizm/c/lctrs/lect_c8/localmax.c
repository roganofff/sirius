#include <stdio.h>

int countLocalMax(int arr[], int n)
{
    int cnt = 0;
    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            cnt++;
        }
    }
    
    return cnt;
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
    printf("%d\n", countLocalMax(arr, n));

    return 0;
}
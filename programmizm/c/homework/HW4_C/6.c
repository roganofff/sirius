#include <stdio.h>

int main()
{
    int n, cnt;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > 0) cnt++;
    }

    printf("%d\n", cnt);
    
    return 0;
}
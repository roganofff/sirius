#include <stdio.h>

int main()
{
    int n, res = 0;
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        res += (i - 1) * i; 
    }
    
    for (int i = 2; i <= n; i++)
    {
        if (i == n)
        {
            printf("%d*%d", (i - 1), i);
        }
        else
        {
            printf("%d*%d+", (i - 1), i);
        }
    }
    printf("=%d", res);

    return 0;
}
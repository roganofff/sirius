#include <stdio.h>

int main()
{
    int n, num, count = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num == 0)
        {
            count++;
        }
    }
    
    printf("%d", count);

    return 0;
}
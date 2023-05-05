#include <stdio.h>

int main()
{
    int n, num, pos, neg, zeros;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        if (num > 0) pos++;
        else if (num == 0) zeros++;
        else neg++;
    }

    printf("%d %d %d\n", zeros, pos, neg);
    
    return 0;
}
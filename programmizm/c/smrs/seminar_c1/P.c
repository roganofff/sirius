#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if (a == 0)
    {
        b == 0 ? printf("INF\n") : printf("NO\n");
    } else
    {
        b % a == 0 ? printf("%d", -b / a) : printf("NO\n");
    }

    return 0;
}
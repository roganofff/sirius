#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);

    // a > b ? printf("%d\n", a) : printf("%d\n", b); тернарный оператор

    if (a > 0 && a % 2 == 0)
    {
        printf("YES\n");
    } else if (a > 0 || a % 2 == 0)
    {
        printf("YES|NO\n");
    } else
    {
        printf("NO\n");
    }

    return 0;
}
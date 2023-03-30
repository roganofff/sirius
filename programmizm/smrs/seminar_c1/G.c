#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    a == b ? a == c ? printf("%d", 3) : printf("%d", 2) : b == c ? printf("%d", 2) : a == c ? printf("%d", 2) : printf("%d", 0);

    return 0;
}
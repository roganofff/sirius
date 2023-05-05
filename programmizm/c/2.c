#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int weeks = 1 + (k - 8 + n) / 7 + ((k - 8 + n % 7 > 0) ? 1 : 0);

    printf("%d", weeks);

    return 0;
}
#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k);
    int weeks = 1 + (k - 8 + n) / 7 + ((k - 8 + n % 7 > 0) ? 1 : 0);

    int cnt = 1;
    for (int i = 0; i < 7 * weeks; i++)
    {
        if (i < 7 && i < n - 1 || cnt > k) printf("  ");
        else 
        { 
            (cnt < 10) ? printf(" %d", cnt) : printf("%d", cnt); 
            cnt++; 
        }
        if (i % 7 == 0) printf(" ");
    }
    printf("\n");

    return 0;
}
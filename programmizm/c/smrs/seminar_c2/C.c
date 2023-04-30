#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int powN10 = 1;
    for (int i = 0; i < n; i++)
    {
        powN10 *= 10;
    }
    
    for (int i = powN10 - 1; i > powN10 / 10 - 1; i--)
    {
        if (i % 2 == 1)
        {
            printf("%d ", i);
        }
    }
    
    return 0;
}
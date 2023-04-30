#include <stdio.h>

int main()
{
    int n, s;
    do
    {
        scanf("%d", &n);
        s += n;
    } while (n != 0);
    
    printf("%d\n", s);

    return 0;
}
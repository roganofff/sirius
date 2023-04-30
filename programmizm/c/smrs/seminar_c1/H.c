#include <stdio.h>

int main()
{
    int denis, ira;
    scanf("%d %d", &denis, &ira);

    if (ira == 1 && denis == 1 || ira != 1 && denis != 1)
    {
        printf("YES\n");
    } else
    {
        printf("NO\n");
    }

    return 0;
}
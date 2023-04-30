#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1, y1, x2, y2;
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

    if (abs(x1 - x2) == 2 && abs(y1 - y2) == 1 || abs(x1 - x2) == 1 && abs (y1 - y2) == 2)
    {
        printf("YES\n");
    } else
    {
        printf("NO\n");
    }

    return 0;
}
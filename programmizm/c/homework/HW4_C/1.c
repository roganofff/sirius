#include <stdio.h>

int main()
{
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int m, y;
    scanf("%d%d", &m, &y);

    ((y % 4 == 0 || y % 100 == 0 && y % 400 == 0) && m == 2) ? printf("%d\n", months[m - 1] + 1) : printf("%d\n", months[m - 1]);

    return 0;
}
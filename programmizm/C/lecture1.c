#include <stdio.h>

int main()
{
    int day;
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Понедiлок");
        break;
    case 2:
        printf("Вiвторок");
        break;
    case 3:
        printf("Середа");
        break;

    default:
        printf("Лайно");
        break;
    }
    return 0;
}
#include <stdio.h>

int main ()
{
    float sum = 0, cnt = 0, num;
    scanf("%f", &num);
    while (num != 0)
    {
        sum += num;
        cnt++;
        scanf("%f", &num);
    }

    printf("%f", sum / cnt);

    return 0;
}
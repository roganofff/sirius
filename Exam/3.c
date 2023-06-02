#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, sum = 0;
    scanf("%d", &num);
    while (num != 0)
    {
        if (abs(num) % 7 == 0) sum += num;
        scanf("%d", &num);
    }
    
    printf("%d\n", sum);

    return 0;
}
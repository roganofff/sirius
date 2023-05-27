#include <stdio.h>

void countSequence()
{
    int cur, prev, cnt = 0;
    scanf("%d", &prev);
    if (prev == 0) 
    {
        printf("%d\n", 0);
        return;
    }
    scanf("%d", &cur);
    while (cur != 0)
    {
        if (cur > prev)
        {
            cnt++;
        }
        prev = cur;
        scanf("%d", &cur);
    }
    printf("%d\n", cnt);
    return;
}

int main()
{
    countSequence();
    
    return 0;
}
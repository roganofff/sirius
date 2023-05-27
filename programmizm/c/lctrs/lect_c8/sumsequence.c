#include <stdio.h>

float sumSequence(int n)
{
    float s = 0;
    for (int  i = 1; i <= n; i++)
    {
        if (i % 2) s -= (float) 1/i;
        else s += (float) 1/i;
    }
    
    return s;
}

float sumSequence2(int n)
{
    float s = 0; 
    int sign = 1;
    for (int  i = 1; i <= n; i++)
    {
        s += (float) 1/i * sign;
        sign *= -1;
    }
    
    return s;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", sumSequence2(num));

    return 0;
}
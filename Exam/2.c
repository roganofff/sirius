#include <stdio.h>

float sumFoo(int n)
{
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        int fact = 1;
        for (int j = 1; j <= i; j++)
        {
            fact *= j;
        }
        sum += (float) fact / (i*i); 
    }
    
    return sum;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%f\n", sumFoo(n));

    return 0;
}
#include <stdio.h>

int coundDigits(int n)
{
    int cnt = 0;
    while (n > 0)
    {
        if (n % 10 % 2 == 1) cnt++;
        n /= 10;
    }
    
    return cnt;
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", coundDigits(num));

    return 0;
}
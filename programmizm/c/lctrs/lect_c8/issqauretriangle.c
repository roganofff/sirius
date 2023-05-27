#include <stdio.h>

int isSquareTriangle(int a, int b, int c)
{
    if ((a*a + b*b == c*c) || (a*a + c*c == b*b) || (b*b + c*c == a*a)) return 1;
    return 0;
}

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (isSquareTriangle(a, b, c))
    {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    

    return 0;
}
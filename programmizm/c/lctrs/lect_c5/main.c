#include <stdio.h>

int main()
{
    int n = 5, *p_n = &n;
    char ch = 'A', *p_ch = &ch;
    *p_n = 10;
    *p_ch = 'B';
    printf("%d %c\n", *p_n, *p_ch);

    return 0;
}
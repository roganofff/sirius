#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int len_binary = (int) (log2(n) + 1);
    int binary[len_binary];
    printf("%d\n", len_binary);

    for (int i = 0; i < len_binary; i++)
    {
        binary[len_binary - i] = n % 2;
        n /= 2;
    }
    for (int i = 0; i < sizeof(binary) / 4; i++)
    {
        printf("%d", binary[i]);
    }
    
    return 0;
}
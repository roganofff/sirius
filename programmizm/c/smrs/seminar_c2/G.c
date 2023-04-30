#include <stdio.h>

int main()
{
    int n, factN = 1, k, factK = 1, factNK = 1, result;
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++)
        {
            factN *= i;
            if (i == k)
            {
                factK = factN;
            }
            if (i == n - k)
            {
                factNK = factN;
            }
        }
    result = factN / (factK * factNK);

    printf("%d", result);

    return 0;
}
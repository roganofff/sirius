#include <stdio.h>
#include <stdlib.h>

void reduce_fraction(int *a, int *b)
{
    if (*a == 0 || *b == 0) return; // так как делить на ноль нельзя, просто выходим из функции

    int min = (*a < *b) ? *a : *b, gcd; // находим минимальное из двух чисел, чтобы найти для них НОД
    for (int i = 1; i <= abs(min); i++) // если одно из чисел будет отрицательным, берём модуль от него
    {
        if (*a % i == 0 && *b % i == 0) // ищем НОД
        {
            gcd = i;
        }
    }
    // сокращаем дробь
    *a /= gcd;
    *b /= gcd;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    
    reduce_fraction(&a, &b);

    printf("%d %d\n", a, b);

    return 0;
}
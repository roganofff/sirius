#include <stdio.h>
#include <math.h>
// РЕКОМЕНДУЮ ЗАПУСКАТЬ НЕ ЧЕРЕЗ VS CODE, А ЧЕРЕЗ ОБЫЧНЫЙ ТЕРМИНАЛ !!! cc 4.c -o 4 -lm !!!
int main()
{
    int n;
    scanf("%d", &n); // получаем данные
    // если число отрицательное, меняем его на положительное, но ставим минус в выводе
    if (n < 0) { n = -n; printf("-"); }
    int binary_lenght = (int) (log2(n) + 1); // вычисляем длинну числа в двоичной СС, используя math.h
    int binary[binary_lenght]; // объявляем массив длинной binary_lenght

    // т.к. при переводе таким методом нужно перевернуть число в конце, проходимся по массиву с конца
    for (int i = binary_lenght - 1; i >= 0; i--)
    {
        binary[i] = n % 2; // получаем одну цифру из двоичной записи числа
        n /= 2; // делим нацело на 2, чтобы найти следующую цифру
    }
    for (int i = 0; i < sizeof(binary) / 4; i++) // sizeof(array) / вес типа переменной == binary_lenght
    {
        printf("%d", binary[i]); // в этом цикле выводим массив, в котором лежит число в двоичной форме
    }
    printf("\n"); // для красоты

    return 0;
}
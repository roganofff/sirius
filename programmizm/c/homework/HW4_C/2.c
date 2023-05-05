#include <stdio.h>

int main()
{
    int n, k;
    scanf("%d%d", &n, &k); // получаем всякие там данные на вход
    int weeks = 1 + (k - 8 + n) / 7 + ((k - 8 + n % 7 > 0) ? 1 : 0); // вычисляем кол-во недель в месяце: 1 неполная неделя, в которой первый день начинается с n;
                                                                     // потом вычисляем кол-во заполненных полностью недель, складываем всё с неполной неделей в конце, если она есть(проверяем в тернарном операторе)
 
    int cnt = 1; // счётчик дней до k
    for (int i = 0; i < 7 * weeks; i++) // в цикле проходимся по полным неделям из 7 дней каждая
    {
        if (i <= 7 && i <= n - 1 || cnt > k) printf("  "); // если неделя первая(i <= 7) и день != n (это для самой первой недели) или все дни месяца уже выведены, выводим 2 пробела 
        else // иначе выводим номер дня
        { 
            (cnt < 10) ? printf(" %d", cnt) : printf("%d", cnt); // если номер состоит из одной цифры, добавляем в начало пробел
            cnt++; // и инкрементируем счётчик
        }
        if (i % 7 != 0) printf(" "); // если неделя(7 дней) не прошла, ставим просто пробел между числами
        else printf("\n"); // иначе выводим на новую строку
    }
    printf("\n"); // чисто для красоты

    return 0;
}
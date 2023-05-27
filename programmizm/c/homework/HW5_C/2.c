#include <stdio.h>
// струкрута персоны, которая дана по условию
struct Person
{
	int age; // возраст
	char name[30]; // имя
};
// функция высчитывающая средний возраст массива из структур персон
float averageAge(struct Person arr[], int n)
{
    int sum = 0; // сразу ставим значение 0, потому что иначе там может оказатья мусор
    for (int i = 0; i < n; i++)
    {
        sum += arr[i].age; // обращаяемся к полу структуры через точку
    }
    
    return (float) sum / n; // возвращаем среднее арифметическое возраста, явно указываем тип флоат
}

int main()
{
    int n;
    scanf("%d", &n); // получаем штуки
    struct Person arr[n]; // создаём массив из структур
    for (int i = 0; i < n; i++)
    {
        printf("Введите Ваше имя: ");
        scanf("%s", arr[i].name);
        printf("Введите Ваш возраст: ");
        scanf("%d", &arr[i].age);
    }
    // вывод
    printf("Средний возраст: %f\n", averageAge(arr, n));

    return 0;
}
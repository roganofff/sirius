#include <stdio.h>
// структура из условия
struct Move
{ 
    int x;
    int y;
};

struct Move getFinishPoint(struct Move arr[], int n)
{
    struct Move bias = {.x=0, .y=0}; // сначала смещения нет, поэтому всё по нулям
    for (int i = 0; i < n; i++) // проходимся по каждой структуре с шагами
    {
        bias.x += arr[i].x;
        bias.y += arr[i].y;
    }   // по условию прибавляем шаг по координатам
    
    return bias; // возвращаем итоговое смещение
}

int main()
{
    int n;
    printf("Введите кол-во шагов: ");
    scanf("%d", &n);
    struct Move arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Введите перемещение шага №%d:\nX Y\t", i + 1);
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    struct Move bias = getFinishPoint(arr, n);
    printf("Чертёжник сместился на:\nX Y\t%d %d\n", bias.x, bias.y);

    return 0;
}
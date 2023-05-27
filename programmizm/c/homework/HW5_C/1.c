#include <stdio.h>
// собснооо функция, где мы меняем половинки местами
void switchHalves(int arr[], int n) 
{
    int buf, l = n / 2; // буф для временного хранения одного элемента, л для удобства 
    for (int k = 0; k < l; k++)
    {
        buf = arr[k]; // кладём значение элемента из первой части в буфер
        arr[k] = arr[l + k]; // значение из первой части перезаписываем таким же по счёту элементом из второй чати
        arr[l + k] = buf; // элем из второй части заменяем значением из буфера
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    { // ясно
        scanf("%d", &arr[i]);
    }
    
    switchHalves(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
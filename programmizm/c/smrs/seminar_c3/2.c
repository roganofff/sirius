#include <stdio.h>

struct Point 
{
    int x;
    int y;
};

struct Point sumCoords(struct Point arr[], int n)
{
    struct Point res = { .x = 0, .y = 0 }, *ptr = arr;
    for (int i = 0; i < n; ptr++, i++)
    {
        res.x += ptr->x;
        res.y += ptr->y;
    }
    return res;
}

int main()
{
    // int arr[5] = {1, 2, 3, 4, 5};
    struct Point arr[3] = {{0, 1}, {1, 2}, {3, 1}}, res;
    res = sumCoords(arr, 3);

    printf("%d %d\n", res.x, res.y);

    return 0;
}